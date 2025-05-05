/*Problem: 1930B */
#include <iostream>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int per[n];
        for (int i = 0; i<n; i++){
            if(i % 2 == 1){
                per[i] = i;
            }
        }
        int j = 2;
        for (int i =n-1; i>=0; i--){
            if (i % 2 == 0){
                per[i] = j;
                j +=2;
            }
        }
        if (n % 2 == 1) per[0]--;
        for(int i = 0; i<n;i++){
            cout << per[i] << " "; 
        }
        cout << endl;
    }
}