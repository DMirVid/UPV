#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n ;
    cin  >> n; 
    int s =  (int) sqrt(n);
    int b = -((s*s)-n);
    int a = (int) sqrt(n-b) -b;
    cout << a << " " << b;
    return 0; 
}