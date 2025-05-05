/*Problem: 1932C */
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int datos[n];
        for (int i = 0; i<n; i++){
            cin >> datos[i];
        }
        string ins;
        cin >> ins;
        int der=n-1, izq = 0;
        for (int i = 0; i<n ;i++){
            char in = ins.at(i);
            int te = 1;
            for (int j = 0; j<n; j++){
                te = (te* (datos[j] % m)) %m;
            }
            cout << te << " ";
            if (in == 'L'){
                datos[izq] = 1; 
                izq++;
            }else{
                datos[der] = 1;
                der--;
            } 
        }
        cout << endl;
    }
}
