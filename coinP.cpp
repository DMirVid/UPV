/* Problem: 1934B*/
#include <iostream>
#include <algorithm>
using namespace std;
int comp(int n){
    int x = 0;
            if (n > 15){
                x += n/15;
                n = n%15;
            }if (n >= 10){
                x += n/10 ;
                n = n % 10;
            }if (n >= 6) {
                x += n/6;
                n = n%6;
            }if (n >= 3){
                x += n/3;
                n = n%3;
                
            }if (n >= 1){
                x += n/1;
                n = n%1;
            }
            return x;
}
int div(int n){
    int res = 15;
    for (int i = 2; i<= n; i++ ){
        if (n % i == 0){
            if (i== 15 ){
                res = 15;
            }else if (i == 10){
                res = 10; 
            }else if (i == 6) res = 6;
            else if (i == 3) res = 3;
        }
    }
    return res;

}

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int resto = n;
        int x = div(n);
        count = n % x;
        resto = n% x;
        //siguiente a evaluar
        if (x == 15){
            x = 10;
        }else if ( x== 10){
            x = 6;
        }else if (x == 6){
            x = 3;
        }else if (x == 3){
            x = 1;
        }
        if (resto % x < comp(resto)){
            count += resto %x;
        }else{
            count += comp(resto);
        }
        
        cout << count << endl;
    }
    return 0;
}