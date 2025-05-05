/*Problem: 1955A */
#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n, a, b;
        cin >> n >> a >> b; 
        int res = 0; 
        if (b/2<a) {
            res = b * (n/2);
            res += a* (n%2);
        }
        else {
            res = a* n; 
        }
    cout << res << endl;
    }
    return 0; 
}