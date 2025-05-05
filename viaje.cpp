#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int mapa[n][m];
    for (int i = 0; i< n; i++){
        for (int j = 0; j<m; j++){
            cin >> mapa[i][j];
        }
    }

    int res =mapa[0][0];
    int posx = 0, posy = 0;
    for (int i =1; i< n+m -1; i++){
        if (posx < m && posy <n){
            int der = mapa[posx][posy+1];
            int ab =  mapa[posx+1][posy];
            if (der> ab){
                res = res + der; posy++;
            }else if (der< ab){
                res = res + ab; posx++;
            }
        }else if (posy >= n){
            res = res + mapa[posx+1][posy];
            posx++;
        }else{
            res = res + mapa[posx][posy+1];
            posy++;
        }
    }
   cout << res +mapa[n-1][m-1]<< endl;
}


