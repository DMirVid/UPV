/*Problem: 1995C*/
#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    int t; 
    cin  >> t; 
    while(t--){
        int n; 
        cin >> n; 
        long long arr[n]; 
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        bool fisrt1 = false; 
        int actos = 0; 
        for (int i = 0; i<n-1 ; i++){
            int a = arr[i], b = arr[i+1]; 
            //el uno
            if(a > b){
                int dif = b-a; 
                double x = log2(dif);
                cout << x << endl; 
            }
        }
    }

}