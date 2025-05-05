#include <iostream>
using namespace std;
char letras[] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 
                'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
int main(){
    string n;
    cin >> n;
    int letra = stoi(n) % 23;
    cout << n << letras[letra] << endl;
    return 0;
}