/* Problem: 1932A*/
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char arr[n];
        for ( int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int coins = 0; 
        char ant; 
        for (int i = 0; i<n ; i++){
            if (arr[i] == '@'){
                coins++;
            }else if (i != 0 && arr[i] == '*' && ant == '*'){
                break;
            }
            ant = arr[i];
        }
        cout << coins << endl;
    }
    return 0;
}