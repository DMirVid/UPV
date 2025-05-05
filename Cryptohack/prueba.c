#include <stdio.h>
#include <math.h>

typedef struct {
    int real;   // Real part
    int imag;   // Imaginary part
} GaussianInteger;

// Function to calculate the norm of a Gaussian integer
int norm(GaussianInteger z) {
    return z.real * z.real + z.imag * z.imag;
}

// Function to check if a number is a prime number
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to find Gaussian primes that divide a given integer
void gaussian_factorization(int n) {
    printf("Factorizing %d in Gaussian integers:\n", n);

    // Case when n is a regular prime of form 4k+3 (directly a Gaussian prime)
    if (is_prime(n) && n % 4 == 3) {
        printf("%d is a Gaussian prime.\n", n);
        return;
    }

    // Now consider the factorization using norms
    for (int a = 1; a <= sqrt(n); a++) {
        for (int b = 1; b <= sqrt(n); b++) {
            if (norm((GaussianInteger){a, b}) == n) {
                printf("Found factor: %d + %di\n", a, b);
                return;  // Return after finding the first factor
            }
        }
    }
    printf("Could not find Gaussian factorization for %d.\n", n);
}

int main() {
    int number;

    // Input number to factorize
    printf("Enter a number to factorize in Gaussian integers: ");
    scanf("%d", &number);

    // Perform the Gaussian factorization
    gaussian_factorization(number);

    return 0;
}
