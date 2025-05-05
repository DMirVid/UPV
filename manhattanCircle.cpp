/*Problem: 1985D*/
#include <iostream> 
using namespace std; 


int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n, m; 
        cin >> n >> m; 
        char cir[n][m];
        int max = INT_MAX; 
        int linea = 0; 
        for (int i = 0; i< n; i++){
            int sum = 0; 
            for (int j = 0; j<m; j++){
                char c; 
                cin >> c;
                cir[i][j] = c; 
                sum +=(int) c; 
            }
            //La linea con menor valor será la que tenga más #, # < .
            if (sum < max){
                linea = i;
                max = sum; 
            }
             
        }
        max = 0; 
        n = 0; 
        for (int i = 0; i< m; i++){
            if (cir[linea][i] == '#'){
                max += 1; // Nº de #
                n = i ; // Último # 
            }
        } 
        cout << linea + 1 << " " << n-max/2 + 1  << endl; 
    }
    return 0; 
}