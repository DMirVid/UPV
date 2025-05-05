/*Problem: 1A */
#include <iostream>

using namespace std;

int main(){
    long long  n, m, a;
    cin >> n >> m >> a;
    long long w = n /a, h = m/a;
    if (n % a != 0)w++;
    if (m % a != 0)h++;

    cout << h * w << endl;
}
