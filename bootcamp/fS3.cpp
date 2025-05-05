#include <iostream>
using namespace std; 
int main(){
    int e; 
    bool pri = true; 
    int ant; 
    while (cin >> e){
        if (pri){
            ant = e;
            pri = false; 
        }else{
            if(ant > e) cout << "B";
            else if (ant < e) cout << "S"; 
            else cout << "I";
            ant = e; 
        }
    }
    return 0; 
}