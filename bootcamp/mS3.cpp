#include <iostream>
using namespace std; 
int main(){
    char c;  
    string s;
    while (cin >> c){
         
        getline(cin, s); 
        if(s.length() % 2 == 1){
            
            for (int i = s.length() -1; i>=0; i--){
                cout << s[i];
            }
            cout << c << endl; 
        }else {
            cout << c << s << endl; 
        }
    }
   
    

}