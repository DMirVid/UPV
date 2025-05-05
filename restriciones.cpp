/*Problem: 1920A */
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int max = INT_MAX, min = 0;
        int no = 0; 
        int noEQ[n];
        for (int i = 0; i< n; i++){
            int x, y;
            cin >> x >> y;
            switch (x){
                case 1: // Mayor o igual que y
                    if (y > min)min = y; // Mayor de los menores
                    break;
                case 2: // Menor o igual que y
                    if (y < max) max = y; // Menor de los mayores
                    break;
                case 3: // No igual a y
                    noEQ[no] = y; 
                    no++;
                    break;
                default:
                    break;
            }
        }
        int salida = 0;
        if (min <= max){
            salida = max - min + 1;
            while (no>=0){// Restarle los que no iguales
                if (noEQ[no] >= min && noEQ[no] <= max) salida--;  // Dentro del rango 
                no--; 
            }
        }
        cout << salida << endl;
    }
    return 0;
}