#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i =0 ; i<n; i++){
        int p, impar;
        cin >> p >> impar;
        char s;
        int rojo = 0;
        for (int j = 0; j < p-1; j++){
            cin >> s;
            if (s == 'r'){
                rojo++;
            }
        }
        if (rojo%2 == impar){
            cout << "BLUE" << endl;
        }else {
            cout << "RED" << endl;
        }

    }
}