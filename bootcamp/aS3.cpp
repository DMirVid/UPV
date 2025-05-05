#include <iostream>
using namespace std; 
int main(){
    string s; 
    int t; 
    cin >> s; 
    cin >> t; 
    cout << "Vienen a pasear: ";
    if (s == "Soleado" && t >= 20){
        cout << "Adrian "; 
    }
    if (s == "Soleado" || t > 15){
        cout << "Barbara "; 
    }
    if (s == "Soleado" || s == "Nublado") {
        cout << "Carmen ";
    }
    if (s != "Tormenta"){
        cout << "Dario"; 
    }
    return 0;
}