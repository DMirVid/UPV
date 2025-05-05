/*Problem: 1979 A*/
#include <iostream>
using namespace std;
int main(){
    int t ; 
    cin >> t; 
    while(t--){
        int n;
        cin >> n; 
        int arr[n];
        cin >> arr[0]; 
        int min = INT_MAX;
        
        for (int i = 1; i<n; i++){
            int max = 0; 
            cin >> arr[i];
            if (arr[i] > arr[i-1]) max = arr[i];
            else max = arr[i-1];
            if (max < min) min = max; 
        }

        cout << min - 1 << endl; 
    }
    return 0; 
}