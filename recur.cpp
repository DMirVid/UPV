#include <iostream>
using namespace std;
int solve(long long a3, long long a2, long long a1, int n){
    if(n == 0) return 0; 
    long long x = a3 + a2 + a1;
    cout << " " << x; 
    return solve(a2, a1, x, n-1);
}
int main(){
    int n, a3, a2, a1; 
    cin >> n >> a3 >> a2 >> a1; 
    cout << a3 << " "<< a2 << " " << a1;
    solve(a3, a2, a1, n-3);
    return 0; 
}