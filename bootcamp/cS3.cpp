#include <iostream> 
#include <iomanip> 
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int c; 
        double a, b; 
        cin >> c; 
        switch (c)
        {
        case 1:
            cin >> a; 
            cout << setprecision(5) << fixed << 3.141592 * a * a << endl; 
            break;
        case 2:
            cin >> b; 
            cout << setprecision(5) << fixed << b *b << endl; 
            break; 
        case 3:
            cin >> a >> b; 
            cout << setprecision(5) << fixed << a*b << endl; 
            break;
        default:  
            cin >> a >> b;
            cout << setprecision(5) << fixed << (a*b)/2 << endl;  
            break; 
        }
    }
    
    return 0; 
}