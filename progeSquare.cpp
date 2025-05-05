/*Problem: 1955B */
#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int t;
    cin >> t;  
    while (t--){
        int n, col, row; 
        cin >> n >> col >> row;
        int v[n*n];
        int h[n][n]; 
        int a; 
        for (int i = 0; i< n*n; i++){
            cin >> v[i];
        }
        sort(v, v+n*n);
        bool ord = true; 
        if (col > row) ord = false;
        int i = 0, j = 0; 
        for (int k = 0; k< n* n; k++){
                if(ord){
                    j = 
                    v[i][j] = v[k]; 
                }else{

                }
               
            
        }

        bool tr = true; 
        a = h[0][0];
        for (int i = 0; i<n && tr; i++){
            for (int j = 0; j <n && tr; j++ ){
                int aux = a + (i) *col + (j)*row;
                if (aux != h[i][j])tr = false;
            }
        }
        if(tr){
            cout << "YES" << endl; 
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0; 
}

