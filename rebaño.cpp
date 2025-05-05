#include <iostream>
#include <map>



using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char campo[n][m];
    char c; 
    map<int, int> camp;
    for (int i = 0; i< n; i++){
        for (int j = 0; j<m; j++){
            cin >> c;
            campo[i][j];
            if (c=='L'){
                camp.insert({i, j});
            }
        }
    }
    bool ser = true;
    for (auto k : camp){
        int i = k.first;
        int j = k.second;
        cout << i << " " << j << endl;
        if (i==0 && j ==0){//Arriba izq
            if(campo[i][j+1] == 'O'){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i+1][j] == 'O' ){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(i == 0 && j == m-1){// Arriba der
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i+1][j] == 'O' ){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if (i == 0){//Arriba 
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i][j+1] == 'O' ){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i+1][j] == 'O'){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(i == n-1 && j == 0){//Abajo izq
            if(campo[i][j+1] == 'O'){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(i == n-1 && j == m-1){//Abajo der
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(i == n-1){//Abjo
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i][j+1] == 'O' ){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(j == 0) {//izquierda
            if(campo[i][j+1] == 'O' ){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
            if(campo[i+1][j] == 'O' ){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else if(j == m-1){// derecha
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
            if(campo[i+1][j] == 'O' ){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }else{//En mmedio
            if(campo[i][j-1] == 'O' ){// izq
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j-1] = 'P';
            }
            if(campo[i][j+1] == 'O'){//der
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i][j+1] = 'P';
            }
            if(campo[i-1][j] == 'O' ){//arriba
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
            if(campo[i+1][j] == 'O' ){//abajo
                cout << "No" << endl; 
                ser = false; break;
            }else{campo[i+1][j] = 'P';
            }
        }
    }
    if (!ser){
        cout << "No" << endl;
        return 0;
    }else{
        cout << "Si" << endl;
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cout << campo[i][j];
            }
            cout << endl;
        } 
    }
    return 0;
}   