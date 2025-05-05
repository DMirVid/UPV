/*Problem: 1829F*/
#include <iostream>
#include <array>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t ;
    cin >> t; 
    while(t--){
        int n, m;
        cin >> n >> m;
        bool copo[m][m];
        for (int i = 0; i<m; i++){
            for (int j = 0; j<m; j++){
                copo[i][j] = false; 
            }
        }
        int t1, t2; 
        for (int i = 0; i<m; i++){
            cin >> t1 >> t2; 
            copo[t1-1][t2-1] = true; 
            copo[t2-1][t1-1] = true; 
        } 
        int y = 0, x = 0;
        for (int i = 0; i<m; i++){
            int q = 0; 
            for (int j = 0; j<m; j++){
                if (copo[i][j])q++; 
            }
            if(q == 1)++y;
            else ++x;
        } 
        x = x-1; 
        y = y/x;
        cout << x << " " << y << endl;
    }
    return 0; 
}