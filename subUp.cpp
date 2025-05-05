#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n, l, r; 
        cin >> n >> l >> r; 
        int arr[n]; 
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int ln = n-l; 
        int rn = n-r; 
        
        int sum = 0, sumr = 0; 
        for(int i = l-1; i< r; i++) {
            sum += arr[i];

        }
        for(int i = rn; i<= ln; i++) {
            sumr += arr[i];

        }
        if (sum > sumr) cout << sumr << endl; 
        else cout << sum << endl; 
    }
    return 0; 
}