/* Problem: 455A */
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int solve(auto a){
    int temp = 0;
    if (a.empty()){
        return 0;
    }else{
        for (auto x  = a.begin(); x !=a.end(); ++x){
            auto y = ++x;
            auto z = --x;
            if (x->second * x->first > a[temp] * temp){
                temp = x->first;
            }else if (((x->second * x->first) + ((++y)->first * (++y)->second) > a[temp] * temp) || 
                        ((x->second * x->first) + ((--z)->first * (--z)->second) > a[temp] * temp)){
                temp = x->first;
            }
            cout << temp << " ";
        }
        int res = temp*a[temp];
        a.erase(temp);
        a.erase(temp-1);
        a.erase(temp+1);
        return res + solve(a);
    }
}
int main(){
    int t ;
    cin >> t ;
    map<int,int> datos;
    int temp;
    pair<std::map<int, int>::iterator, bool> dev;
    for (int i = 0; i < t ; i++){
        cin >> temp;
        dev = datos.emplace(temp,1);
        if (!dev.second){
            datos[temp] +=1;
            
        }
    }
    int res = solve(datos);
    cout << res << endl;
}
