/*Problem: ?*/
#include <iostream>
#include <array>
#include <cmath>
using namespace std; 
double rec(int v[], int i){
    if (i ==0) return sqrt(v[i]);
    else{
        
        return sqrt(rec(v, i-1)+ v[i]);
    }
}
int main(){
    int  n, t; 
    cin >> n >> t; 
    int v[n];
    for (int i= 0; i<n; i++){
        cin >> v[i];
    }
    while(t--){
        int a, b; 
        cin >> a >> b;
        v[a-1] = b; 
         
        
        cout << rec(v, n) << endl; 
    }
    
}