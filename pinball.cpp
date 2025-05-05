/*Problem: 1937D */
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n;
        bool datos[n]; // true = izq, false = der
        char c;
        for ( int i = 0; i <n ; i++){
            cin >> c;
            if (c == '<'){
                datos[i] = true;
            }else{
                datos[i] = false;
            }
        }
        bool cop[n];
        for (int i = 0; i< n; i++){
            copy_n(datos, n, cop);
            int j = i;
            int cont = 0;
            while(j>=0 && j<n){// condicion de salida
                if (cop[j]){
                    cop[j] = false;
                    j--;
                }else{
                    cop[j] = true;
                    j++;
                }
                cont++;
            }
            cout << cont << " ";
        }
        cout << endl;
    }
}