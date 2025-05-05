#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i< n; i++){
        int uvas, pers;
        cin >> uvas >> pers;
        if (uvas /12 >= pers){
            cout << "SI" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}