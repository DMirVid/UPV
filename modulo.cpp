#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0;i< n; i++){
        int x, y;
        cin >> x >> y;
        int res = x%y;
        if (res == 0){y = 0;}
        cout << y - res << endl;
    }
}