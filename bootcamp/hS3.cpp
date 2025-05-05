#include <iostream>
using namespace std; 
int main(){
    int t;
    cin >> t; 
    int max = -1000, min = 1000; 
    for (int i = 0; i<t; i++){
        int x; 
        cin >> x; 
        if (x > max) max = x; 
        if (x < min) min = x; 
    }
    cout << min << " " << max; 
}