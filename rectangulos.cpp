#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    while (n--){
        int a, b;
        cin >> a >> b;
        if (a> b)swap(a,b);
        if ((a % 2 == 1 && b% 2 == 1) || (b == 2 * a && a % 2== 1) ){
            cout << "No" << endl;
        }else {
            cout << "Yes" << endl ;
        }
    }
    return 0;
}