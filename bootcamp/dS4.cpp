#include <iostream>
using namespace std; 
int main(){
    int n, m; 
    cin >> n >> m; 
    char mesa[n][m]; 
    int vacioF = '.' * m; 
    int vacioC = '.' * n; 
    bool columnas[m]; 
    bool filas[n]; 
    for (int i = 0; i<n; i++){
        int suma = 0; 
        for (int j = 0; j< m; j++){
            char c; 
            cin >> c;  
            mesa[i][j] = c; 
            suma += c; 
        }
        if (suma < vacioF)filas[i] = true; 
        else filas[i] = false; 
    }
    for (int i = 0; i<m; i++){
        int suma = 0; 
        for (int j = 0; j<n; j++){
            suma += mesa[j][i]; 
        }
        if (suma < vacioC)columnas[i] = true; 
        else columnas[i] = false; 
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (filas[i] || columnas[j]) cout << '#';
            else cout << '.'; 
        }
        cout << endl; 
    }
    return 0; 
}