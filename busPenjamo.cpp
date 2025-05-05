#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n, r; 
        cin >> n >> r;
        int impares = 0; 
        int happy = 0; 
        for (int i = 0; i< n; i++){
            int x ; 
            cin >> x; 
            if (x % 2 == 0){
                happy += x; // Los que son happy
                r = r - x/2;   // Las filas que ocupan 
            }else{
                impares++; //El pobrew que se queda solo
                happy += x - 1;  //Los que podraán ir juntos 
                r = r - x/2; // Las filas que ocupan 
            }
        }
        if (impares > r){
            impares = r - impares /2 + impares % 2  ; // Los que quedan libre tras llenar las filas 
        }
        cout << happy + impares << endl; 
    }
    return 0; 
}