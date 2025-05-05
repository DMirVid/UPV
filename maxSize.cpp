#include <iostream>
using namespace std; 
int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n;
        int pares = 0,  impares = 0; 
        for (int i = 0; i<n ; i++){
            int x; 
            cin >> x; 
            if (i %2 ==0 && x > pares) pares = x; 
            else if (i %2 ==1 && x > impares)impares = x; 
        }
        int y = n / 2 + n%2;
        pares += y; 
        impares += n- y; 
        cout << (pares > impares ? pares: impares) << endl; 

    }
    return 0; 
}