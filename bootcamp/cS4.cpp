#include <iostream> 
using namespace std; 
int main(){
    int n; 
    cin >> n; 
    int a[n], b[n]; 
    for (int i = 0; i<n; i++){
        cin >> a[i]; 
    }
    for (int i = 0; i<n; i++){
        cin >> b[i]; 
        if (i % 2 == 0){
            cout << a[i] << " "; 
        }else{
            cout << b[i] << " "; 
        }
    }
    cout << endl; 
    for (int i = 0; i<n; i++){
        if (i % 2 == 1){
            cout << a[i] << " "; 
        }else{
            cout << b[i] << " "; 
        }
    } 
    return 0; 
}