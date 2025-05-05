#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        string s; 
        char x; 
        cin >> x; 
        getline(cin, s); 
        int vocales = 0, espacios = 0; 
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                vocales++; 
        }if (x == 32){
            espacios++; 
        }
        for (int i = 0; i<s.length(); i++){
            char c = s[i]; 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vocales++; 
            }if (c == 32){
                espacios++; 
            }
        }
        cout << vocales <<" "<< s.length() + 1 - espacios << endl;  

    }
    return 0; 
}