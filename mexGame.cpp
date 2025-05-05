/*Problem: 1944C */
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        int data[n];     
        for (int i =0; i<n; i++){
            cin  >> data[i];
        }
        sort(data, data+n);
        int ant = data[0];
        for(int i = 1; i<n-1; i++){
            if(data[i] ==  ant){

            }else {
                ant = data[i];
            }
        }
    }
    return 0;
}