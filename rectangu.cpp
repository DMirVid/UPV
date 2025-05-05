#include <iostream>
using namespace std; 
int main(){
    int n, m ; 
    cin >> n >> m; 
    int pueblo[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> pueblo[i][j];
            if (i == 0 && j == 0) continue;
            if (i==0)pueblo[i][j] += pueblo[i][j-1];
            else if (j==0) pueblo[i][j] += pueblo[i-1][j];
            else pueblo[i][j] +=  max(pueblo[i-1][j], pueblo[i][j-1]); 
        }
    }
    cout << pueblo[n-1][m-1];
    return 0; 

}