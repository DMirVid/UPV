#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b; 
        cin >> a >> b; 
        cout << a*(b/2) << endl;
    }
}