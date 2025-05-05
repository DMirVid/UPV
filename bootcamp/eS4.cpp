#include <iostream> 
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        char c; 
        cin >> c; 
        string s; 
        getline(cin , s); 
        cout << "****";
        for (int i = 0; i<s.length(); i++){
            if(s[i]== 32)cout << "***"; 
            else cout << "****";
        }
        cout << endl; 
        cout << "* " << c << " "; 
        bool espacio = false; 
        for (int i = 0; i<s.length(); i++){
            if(s[i]== 32){
                cout << "***";
                espacio = true; 
            }else if (espacio){
                cout << " " << s[i] << " ";
                espacio = false; 
            } 
            else cout << "* " << s[i] << " ";
        }
        cout <<"*"<< endl; 
        cout << "****";
        for (int i = 0; i<s.length(); i++){
            if(s[i]== 32)cout << "***"; 
            else cout << "****";
        }
        
    }
}