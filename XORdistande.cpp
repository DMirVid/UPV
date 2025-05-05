#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i =0; i< n; i++){
        
        long long a, b, r;
        cin >> a >> b >>r;
        long long min;
        long long aux;
        if (r>= 100000){
            
        }//else{
        for(long long j =r; j>= 0; j--){
            if (j == r){    //Primera vez inicializar en min
                min = abs((a^j) - (b^j));
            }else{      //El resro guardar en aux
                aux =  abs((a^j) - (b^j));
                if (aux < min) min = aux;
            }
            
        }
        //}
        cout << min << endl;
    }
    return 0;
}