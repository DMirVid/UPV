/*Problem: 933 A*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n; 
    int planes[n];
    for (int i = 0; i<n; i++){
        cin >> planes[i];
    }

    for (int i = 0; i<n ; i++){
        int x = planes[i];
        int y = planes[x-1];
       if (planes[y-1] == i+1){
        cout << "YES";
        return 0; 
       } 
    }
    cout << "NO";
    return 0;
}