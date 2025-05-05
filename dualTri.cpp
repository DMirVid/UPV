/* Problem: 1951A */
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while (t--){
        int n; 
        cin >> n; 
        int on = 0; 
        char v[n];
        int last; 
        for (int i = 0; i< n; i++){
            char c; 
            cin >> c; 
            v[i] = c; 
            
            if (c == '1') {on++; last = i; }
        }
        
        if (on % 2 == 0 ){
            if(on == 2 && v[last] == v[last-1]){
                cout << "NO" << endl; 
            }else{
                cout << "YES" << endl;
            }
           
        }
        else {
            cout << "NO" << endl; 
        }
        

    }
    return 0; 
}