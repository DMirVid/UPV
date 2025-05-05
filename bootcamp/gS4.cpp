#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin  >> t; 
    while(t--){
        char c ; 
        bool actual = true; // true W - false B
        for (int i = 0; i<8; i++){
            for ( int j = 0; j<8; j++){
                cin >> c; 
                if(c ==  'W' && actual){

                }else if(c == 'B' && !actual){

                }else c = 'X'; 
                cout << c; 
                actual = !actual;
           } 
           cout << endl; 
           actual = !actual; 
        }
    }
    return 0; 
}