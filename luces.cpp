#include <iostream>
#include <map>
using namespace std; 
int main(){
    while (true){
        int n; 
        cin >> n; 
        if (n == 0) return 0;
        map<int, pair<int, int>> luces;
        for(int i = 0; i<n; i++){
            int l; 
            cin >> l; 
            if (luces.find(l) == luces.end()){
                luces[l] = pair<int, int>(i, i);
            }else{
                luces[l].second = i;
            }
        }
        long long sum = 0;
        for (auto i = luces.begin(); i != luces.end(); i++){
            sum += i ->second.second - i->second.first;
        }
        cout << sum << endl; 
        
    }
    return 0; 
}