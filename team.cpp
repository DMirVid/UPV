/*Problem: 231A */
#include <iostream>

using namespace std;

int main(){
    int n;
    int p = 0;
    cin >> n;
    for (int i = 0; i< n; i++){
        int cont;
        int f1, f2, f3;
        cin >> f1 >> f2 >> f3;
        cont = f1 +f2 +f3;
        if (cont>1)p++;
    }

    cout << p << endl;

}

