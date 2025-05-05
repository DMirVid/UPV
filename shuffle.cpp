/*Problem: 1937A */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t ; 
    cin >> t;
    while (t--){
        int n ;
        cin >> n; 
        int x = n; 
        int pot = 0;
        int res = 0; 
        int y;
        while(x != 1){
            pot++;
            y = x % 2;
            if (y == 1 )res = pot;
            x = x /2;
        }
        int uno = (int) pow(2, pot);
        cout << uno << endl;
    }
}
