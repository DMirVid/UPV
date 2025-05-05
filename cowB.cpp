/* Problem: 1951B*/
#include <iostream>
using namespace std; 
int main(){
    int t ;
    cin >> t; 
    while(t--){
        int n, pos;
        cin >> n >> pos; 
        pos = pos-1;
        int v[n];
        int res = 0; 
        for (int i= 0; i<n; i++){
            cin >> v[i];
        }
        int k = v[pos];
        int mayor = -1;
        for (int i = 0; i<n ; i++){ // Buscamos el primer mayor
            if(i != pos && v[i] > k){
                mayor = i;
                break; 
            }
        }
        if (mayor == -1){//Soy el mayor, me pongo el primero
            res = n-1;
        }else if (mayor < pos && mayor <=(pos-mayor)){// Si esta a la izquierda, cambiamos con el primero mayor
            v[pos] = v[mayor];                          //Y hay menos para ganar a la izq
            v[mayor] = k; 
            if (mayor != 0)res++;
            for(int i = mayor+1; i< pos; i++){
                if(v[mayor] > v[i])res++;
                else break;
            }
            if (mayor-1 > res)res = mayor-1;//Si por la derecha hay valores mayores
        }else {//Cambiamos con el primero
            res = mayor-1; 
        }
        cout << res << endl; 
    }
    return 0; 
}