/*Problem: 158A */
#include <iostream>
using namespace std;
 
int main(){
    int n, k;
    int total;
    int corte;
    cin >> n >> k;
    k--;
    int puestos[n];
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        if (i==k)corte = c;
        puestos[i] = c;
 
    }
    for(int j = 0; j<n; j++){
        
        if (puestos[j] != 0 && puestos[j]>=corte) total++;
    
    }
    cout << total << endl;
 
}