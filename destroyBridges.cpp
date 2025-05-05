/* Problem: 1944A */
#include <iostream>
using namespace std;
int main(){
    int t ;
    cin >> t; 
    while (t--){
        int n, k; 
        cin >> n >> k;
        int min = n;
        if (k>= n-1){
            min = 1;
        }
        cout << min << endl;
    }
}