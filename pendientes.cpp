#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n != 0){
        int d[n];
        bool b[n];
        int c = 0; 
        for (int i = 0; i< n; i++){
            cin >> d[i];
        }
        sort(d, d +n);
        int cont = 1;
        for (int j = 0; j< n; j++){
            if (d[j] == d[j+1]){
                cont++;
            }else {
                if(cont >1){
                    c += cont/2;
                }
                cont = 1;
            }
        }
        cout << c;
        cin >> n;
    }
}