#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int n; 
    cin >>  n; 
    int arr[n]; 
    for (int i = 0; i<n; i++){
        cin >> arr[i]; 
    }
    sort(arr, arr+n); 
    int dif = INT_MAX; 
    for (int i = 0; i<n-1; i++){
        int x = arr[i+1] - arr[i];
        if (x< dif) dif = x; 
    }
    cout << dif; 
    return 0; 
}