#include <iostream> 
using namespace std; 
int main(){
    int t;  
    cin >> t; 
    while (t--){
        int n, x; 
        cin >> n >> x; 
        bool encontrado = false; 
        for (int i = 0; i< n ; i++){
            int y; 
            cin >> y; 
            if (!encontrado && y == x  ){
                encontrado = true; 
            }
        }
        if (!encontrado)cout << "NO" << endl; 
        else cout << "YES" << endl; 
    }
    return 0; 
}