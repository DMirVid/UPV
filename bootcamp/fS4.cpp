#include <iostream> 
using namespace std; 
int main(){
    int n; 
    cin>> n; 
    int tostada[n][n]; 
    bool merme = false, igual = true; 
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            char c; 
            cin >> c;  
            tostada[i][j] = c; 
            if (!merme && c == '#')merme = true; 
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            char c; 
            cin >> c; 
            if (c != tostada[i][j]){
                igual = false; 
            } 
        }
    }
    if (!merme){
        cout << "NO LLEVABA MERMELADA" ;
    }else if (!igual){
        cout << "TRAGEDIA"; 

    }else{
        cout << "HA HABIDO SUERTE"; 
    }
    return 0; 
}