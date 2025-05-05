/*Problem: 1901A*/
#include <iostream>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, x; 
        cin >> n >> x; 
        int road[n]; 
        int max = 0; 
        for (int i = 0; i<n; i++){
            int d; 
            cin >> d; 
            road[i] = d; 
            if (i>0){
                if (d-road[i-1] > max) max = d-road[i-1];
            }
            else{ // i == 0; 
                max = d;
            }
        }
        if ((x-road[n-1]) * 2 > max) max = (x-road[n-1]) * 2;
        cout << max << endl;
    }
}