/*Problem 2001 A*/
#include <iostream> 
#include <algorithm>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n; 
        cin >> n; 
        int num[n]; 
        for (int i = 0; i<n; i++){
            cin >> num[i]; 
        }
        sort(num, num +n); 
        int nveces = 1, nv = 1; 
        int x = num[0];   
        for (int i = 1; i<n; i++){
            if(num[i] == x)nveces++;
            else {
                x = num[i]; 
                nveces = 1; 
            }
            if(nveces > nv){
                nv = nveces;  
            }
        }
        cout << n - nv << endl; 

    }
    return 0; 
}