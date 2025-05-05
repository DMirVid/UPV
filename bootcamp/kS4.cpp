#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
void solve(int v[][], int x, int y, int n, int m){
    if(x >= n || y >= m || x < 0 || y < 0 ){

    }else{
        v[x][y]++; 
    }
}
int main(){
    int n, m; 
    cin >> n >> m; 
    char busca[n][m]; 
    int v[n][m]; 
    memset(v, 0, sizeof(v));  
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            char c; 
            cin >> c; 
            if (c == '#'){
                v[i][j] = -100;
                solve(v, i+1, j, n, m); 
                solve(v, i, j+1, n, m); 
                solve(v, i-1, j, n, m); 
                solve(v, i, j-1, n, m); 
            }
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            if (v[i][j] == 0) cout << " "; 
            else if(v[i][j] <0 ) cout << "F"; 
            else cout << v[i][j]; 
        }
        cout << endl; 
    }
    return 0; 

}