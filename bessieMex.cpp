/*Problem: 1942B*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std; 

int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int  n; 
        cin >> n ;
        int v[n];
        int j = 0; 
        bool h[n] ;
        for (int i = 0; i<n; i++){
            h[i] = false; 
        }

        for (int i = 0; i<n; i++){
            int c; 
            cin >> c;
            
            while (h[j]) j++;
            if(c>0){
                v[i]= j;
                h[j] = true;
                j++;
            }else if(c<0){
                v[i] = j - c;
                h[j-c] = true;
            }
            
        }
        for (int i = 0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}
