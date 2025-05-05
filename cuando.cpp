#include <iostream>
using namespace std; 
int main(){
    while (true){
        int a, n; 
        cin >> a >> n; 
        if (a == 0 && n == 0)return 0; 
        a += 76 * n;
        cout << "[" << a -(2*n) << " .. " << a+(3*n) << "]" << endl;
    }
    return 0; 
}