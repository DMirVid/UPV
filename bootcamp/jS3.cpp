#include <iostream> 
using namespace std; 
int main(){
    string s; 
    char c; 
    while (cin >> c){
        getline(cin, s); 
    }
    cout << c << s; 
}