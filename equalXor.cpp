/* Problem: 1944B*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int numL[n];
        int numR[n]
        for (int i = 0; i<n;i++){
            cin >> numL[i];
        }
        for (int i = 0; i<n;i++){
            cin >> numR[i];
        }
        sort(numL, numL +n);
        sort(numR, numR +n);
        int l[2*k];
        int r[2*k];
        int antL = 0, antR = 0;
        int lI = 0, rI = 0 ;
        for(int i = 0; i<2*k; i++){

        }

    }
    return 0;
}