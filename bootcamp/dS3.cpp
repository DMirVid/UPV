#include <iostream> 
using namespace std; 
int main(){
    int a, b; 
    cin >> a >> b; 
    int p;  
    for (int i = 0; i<b; i++){
        cin >> p; 
        p = p - a;
        if (p == 0)cout << "1p ";
        else if (p>= -5 && p<= 5)cout << "0.5p "; 
        else if (p>= -10 && p<= 10)cout << "0.25p "; 
        else cout << "0p "; 
    }
    return 0; 

}