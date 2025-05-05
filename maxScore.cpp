/*Problem: 1930A */
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int board[2*n];
        long long res = 0;
        for (int i = 0; i<2*n; i++){
            cin >> board[i];
        }
        sort(board, board+2*n);
        for (int i = 0; i<2*n; i++){
            if (i%2 == 0){
                res += min(board[i], board[i+1]);
            } 
        }
        cout << res << endl;      
    }
    return 0;
}