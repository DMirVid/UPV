/*Problem: 1995A*/
#include <iostream>
using namespace std; 
int solve(int n, int x, int y){
    if (x <= 0 || y <= 0)return 0; 
    if (x == n){// Primera interaccion 
        return 1+ solve(n, x-1, y-x);
    }
    if (y >= 2 * x){//Se llenan dos diagonales 
        return 2 + solve(n, x-1, y-2*x); 
    }
    else{
        if (y-x > 0)return 2; 
        return 1; 
    }
}
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, k; 
        cin >> n  >> k; 
        cout << solve(n, n, k) << endl; 
    }
}