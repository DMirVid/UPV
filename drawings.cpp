/* Problem: 1929B*/
#include <iostream> 
using namespace std;
int main(){
    int t;
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k;
        long long diago = (4*n)-2;
        long long grid = n * n;
        //Por cada grid pasan 2 diagonales 
        long long max = 2*n;
        long long di = k / 2; 
        if( k %2 == 1) di ++; // si es impar
        if (k > grid)di++; // para numeros pequeños
        if (k == diago)di = max; // Para numeros grandes
        cout << di << endl ;
    }
    return 0;
}