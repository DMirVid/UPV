#include <iostream>
#include <iomanip>  
using namespace std; 
int main(){
    double x; 
    cin >> x; 
    string ig;  
    string s, a; 
    getline(cin, ig);
    getline(cin, s); 
    cin >> a; 
    cout << s << ": " << setprecision(3) << fixed << x << endl; 
    cout << a; 
}