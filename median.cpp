#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n ;
        cin >> n ;
        int arr[n];
        for (int i = 0; i< n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int mediana = ceil(n / 2) -1;
        int aux = arr[mediana];
        int j = mediana+1;
        while(aux == arr[j] && j<n) j++;//encuentro el siguiente elemento mayor
        
        cout << j - mediana  << endl;
    }
    return 0;
}

