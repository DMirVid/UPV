#include <iostream>
using namespace std; 
int main(){
    while (true){
        int n, p; 
        cin >> n >> p; 
        if (n == 0) return 0;
        int puede[p];
        for (int i = 0; i<p; i++){
            cin >> puede[i];
        }
        bool come = true;
        for (int i = 0; i<p; i++){
            int h;
            cin >> h;
            if ( h > n || puede[i]<h ){
                come = false;
                break;
            }
            n = n - h;
            
        }
        if (come) cout << "SI" << endl;
        else cout << "NO" << endl;  
    }
    return 0;
}