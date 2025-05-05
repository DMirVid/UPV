/*Problem: 1985 C*/
#include <iostream> 
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        int arr[n];
        long long sumPrev = 0; 
        int res = 0; 
        int max = 0; 
        for (int i = 0; i<n; i++){
            int x; 
            cin >> x; 
            if (x > max) max = x; 
            arr[i] = x; 
            sumPrev += x;     
            if (sumPrev - max == max){
                res++;   
            } 
            
        }
        cout << res << endl; 
    }
}