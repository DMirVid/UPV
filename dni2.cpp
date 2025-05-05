#include <iostream>
#include <string>
using namespace std;
char letras[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 
                'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
int main(){
    string n;
    cin >> n;
    try{
    if (n.length() == 9){
        
        int letra = stoi(n.substr(0,8)) % 23;
        if (letras[letra] == n.at(8)){
            cout << "Si" << endl;
        }else{
            cout << "No" << endl;
        } 
        return 0;
    }
    cout << "No"<< endl;
    }
    catch(invalid_argument){
        cout << "No" << endl;
    }
    
    return 0;
}