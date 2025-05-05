/*Problem: 1969 B*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s; 
        int inc = 1; 
        int res = 0; 
        for (int i = 0; i<s.length() ;i++){
            char c = s[i];
            
            if(c == '1'){
                inc++;
            }else{
                if (inc != 1)res += inc; 
            }
        }
        cout << res  << endl;
    }
    return 0; 
}