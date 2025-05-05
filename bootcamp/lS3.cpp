#include <iostream>
using namespace std; 
int main(){
    int x, y; 
    cin >> x >> y; 
    int suma = 0; 
    for (int i = 0; i<x; i++){
        for (int j = 0; j<y*2; j += 2){
            char c, a; 
            cin >> c >> a; 
            if(c == '#' || a == '#'){
                suma++; 
            }
        }
    }
    cout << suma ; 
    return 0; 
}