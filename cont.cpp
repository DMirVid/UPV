/*Problem: 1972 A*/
#include <iostream>
using namespace std;
int main(){
    int t; 
    cin >> t; 
    while (t--){
        int n; 
        cin >> n;
        int a[n];
        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        int j = 0; 
        int sum = 0; 
        for(int i = 0; i< n; i++){
            int b;
            cin >> b;
            if (a[j] > b){
                sum++;
            }else{
                j++;
            }
        }
        cout << sum << endl;

    }
    return 0;
}