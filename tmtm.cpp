/*Problem: 1934A */
#include <iostream>
#include <algorithm>
using  namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        int dat[n];
        for (int i = 0; i<n; i++){
            cin >> dat[i];
        }
        sort(dat, dat + n);
        int sum = 0;
        for (int i = 0 , j = n-1; i<2; i++, j--){
            sum += abs(dat[i]-dat[j]);
        }
        cout << sum*2 << endl;
    }
}