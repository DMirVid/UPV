#include <iostream>
#include <gmp.h>
#include <gmpxx.h>
#include <vector>
#include <ctime>

// Point on an elliptic curve
struct Point {
    mpz_class x, y;
    bool is_infinity;
    
    Point() : is_infinity(true) {}
    Point(mpz_class x, mpz_class y) : x(x), y(y), is_infinity(false) {}
};

// Elliptic Curve: y^2 = x^3 + ax + b (mod n)
struct EllipticCurve {
    mpz_class a, b, n;
    
    EllipticCurve(mpz_class a, mpz_class b, mpz_class n) : a(a), b(b), n(n) {}
};

mpz_class gcd(mpz_class a, mpz_class b) {
    mpz_class g;
    mpz_gcd(g.get_mpz_t(), a.get_mpz_t(), b.get_mpz_t());
    return g;
}

mpz_class mod_inv(mpz_class a, mpz_class n) {
    mpz_class inv;
    if (mpz_invert(inv.get_mpz_t(), a.get_mpz_t(), n.get_mpz_t())) {
        return inv;
    }
    return 0;
}

Point elliptic_add(const Point &P, const Point &Q, const EllipticCurve &curve, mpz_class &factor) {
    if (P.is_infinity) return Q;
    if (Q.is_infinity) return P;
    
    mpz_class lambda, numerator, denominator;
    if (P.x == Q.x && P.y == -Q.y) {
        return Point(); // Point at infinity
    }
    
    if (P.x == Q.x && P.y == Q.y) {
        numerator = 3 * P.x * P.x + curve.a;
        denominator = 2 * P.y;
    } else {
        numerator = Q.y - P.y;
        denominator = Q.x - P.x;
    }
    
    factor = gcd(denominator, curve.n);
    if (factor > 1 && factor < curve.n) return Point(); // Non-trivial factor found
    
    denominator = mod_inv(denominator, curve.n);
    if (denominator == 0) return Point(); // Inversion failed
    
    lambda = (numerator * denominator) % curve.n;
    
    mpz_class x3 = (lambda * lambda - P.x - Q.x) % curve.n;
    mpz_class y3 = (lambda * (P.x - x3) - P.y) % curve.n;
    
    return Point(x3, y3);
}

Point elliptic_multiply(Point P, mpz_class k, const EllipticCurve &curve, mpz_class &factor) {
    Point result;
    Point addend = P;
    
    while (k > 0) {
        if (k % 2 == 1) {
            result = elliptic_add(result, addend, curve, factor);
            if (factor > 1 && factor < curve.n) return Point();
        }
        addend = elliptic_add(addend, addend, curve, factor);
        if (factor > 1 && factor < curve.n) return Point();
        k /= 2;
    }
    return result;
}

mpz_class ecm_factorization(mpz_class n, int B) {
    while (true) {
        mpz_class x, y, a;
        gmp_randclass rand_gen(gmp_randinit_default);
        rand_gen.seed(time(0));
        x = rand_gen.get_z_range(n);
        y = rand_gen.get_z_range(n);
        a = rand_gen.get_z_range(n);
        
        mpz_class b = (y * y - x * x * x - a * x) % n;
        EllipticCurve curve(a, b, n);
        Point P(x, y);
        
        mpz_class factor = 1;
        for (int i = 2; i <= B; ++i) {
            P = elliptic_multiply(P, i, curve, factor);
            if (factor > 1 && factor < n) return factor;
        }
    }
}

int main() {
    mpz_class n;
    std::cout << "Enter a composite number: ";
    std::cin >> n;
    
    int B = 10000; // Bound for ECM
    mpz_class factor = ecm_factorization(n, B);
    
    std::cout << "Non-trivial factor found: " << factor << std::endl;
    return 0;
}
