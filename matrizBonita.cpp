/*Problem: 263A */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n= 0;
    int i =-1;
    while (n == 0){
        cin >> n;
        i++;
    }
    int fil = i / 5;
    int col = i % 5; 
    int res = abs(fil-2) + abs(col-2);
    cout << res;
}