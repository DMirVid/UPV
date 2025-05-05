/*Problem: 1969 A*/
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int inv[n];
        bool f = false;
        for (int i = 0;i<n; i++) cin >> inv[i];
        for (int i = 0; i<n; i++){
            int x = inv[i];
            int y = inv[x-1];
            if(y == i+1){
                f = true;
                break;
            }
        }
        if (f) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}