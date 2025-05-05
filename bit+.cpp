/* Problem: 282A*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i<n; i++){
        string s;
        cin >> s;
        if (s.substr(1,1) == "+"){
            x++;
        }else{
            x--;
        }
    }
    cout << x;
}