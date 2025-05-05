/* Problem: 1932E */
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        char count[n];
        for (int i = 0; i<n; i++){
            cin >> count[i];
        }
        int acarreo = 0;
        char res[n];
        copy(count, count+n, res);
        for (int i = n-2; i >= 0 ; i--){
            int num =res[i+1]-48 + count[i]-48;
            cout << num << "-";
            if(acarreo == 1){
                num++;
            }
            if(num > 9){
                acarreo = 1;
                num = num % 10;
            }
            res[i+1] = num;
        }
        for (int i = 0; i<n; i++){
            cout << res[i];
        }
        cout <<  endl;
    }
    return 0;
}