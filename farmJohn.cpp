/*Problem: 1942A*/
#include <iostream>

using namespace std; 
int main(){
    int t; 
    cin >>  t; 
    while (t--){
        int n, k; 
        cin >> n >> k;
        if ( k == 1){
            int v[n];
            int j = k;
            for (int i = 1 ; i<= n; i++){
                j = j%n; 
                v[j] = i;
                j++;
            }
            for (int i = 0; i <n; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }else if(n== k ){
            for (int i = 0; i<n; i++){
                cout << 1 << " ";
            }
        }
        else {
            cout << -1 << endl;
        }
        
    }
}