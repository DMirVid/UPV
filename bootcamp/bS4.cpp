#include <iostream>
using namespace std; 
int main(){
    int n; 
    cin >> n; 
    int helados[n]; 
    for (int i = 0; i<n; i++){
        cin >> helados[i]; 
    }
    for (int i = 0; i<n; i++){
        int x; 
        cin >> x; 
        cout << helados[i] + x << " ";  
    }
}