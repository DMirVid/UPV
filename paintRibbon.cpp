/*Problem: 1954A */
#include <iostream>
using namespace std; 
int main(){
    int t;
    cin >> t; 
    while(t--){
        int n, m, k;
        cin >> n >> m >> k; 
        if (m ==1 || n == 1 || (n/m)*(m -1) <= k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}