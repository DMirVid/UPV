#include <iostream>
using namespace std; 
int main(){
    int  t;
    cin >> t; 
    for (int i = 1; i<= t; i++){
        if (i % 3 == 0 && i % 5 == 0)cout << "FizzBuzz" << endl; 
        else if (i % 3 == 0)cout << "Fizz" << endl; 
        else if (i %5 == 0)cout << "Buzz" << endl; 
        else cout << i << endl; 
    } 
    return 0; 
}