/*Problem: 1930C*/
#include <iostream>
#include <algorithm>
#include <set>
#include <array>
using namespace std;
bool cmp(long long int* a, int k, int l, int size){//array, 0, n-1
    if (k >= l){
        return true;
    }
    else if (a[k] > a[l] && a[k]-a[l] < size){
        return true && cmp(a, k+1, l-1, size);
    }
    return false;  
}
int main(){
    ios_base:: sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        long long lar[n];
        for (int i = 0; i< n; i++){
            cin >> lar[i];
        }
        set<long long> sal;
        int fuera = 0;
        if (cmp(lar, 0, n-1, n)){//Al reves, el for fuera
            for(int i = 0; i<n; i++){//Izquierda
                long long aux = lar[i] + i+1-fuera;
                sal.insert(aux); 
                fuera++;
            }
        }else{
            for (int i = n; i>0; i--){//Derecha
                long long aux = lar[i-1] + i;
                sal.insert(aux); 
            }
        }
        
        for(auto i = sal.crbegin(); i !=sal.crend(); ++i){
            cout << *i << " "; 
        }
        cout << endl;
    }
    return 0;
}