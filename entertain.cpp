/* Problem: 1935A*/
#include <iostream>
#include <string>
using namespace std;
bool resuelve(string a, int pos, int size){
    if (pos > size / 2 ) return true;
    if (a[pos] ==  a[size-pos-1]){
        return resuelve(a, pos+1, size);
    }
    else if (a[pos] > a[size-pos-1]){
        return false;
    }else{
        return true;
    }

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = s.length();
        string t = "";
        if (!resuelve(s, 0, c)){
            for(int i = c-1; i>= 0; i--){
                t += s[i];
            }
        }
        cout << t << s << endl;
    }
}