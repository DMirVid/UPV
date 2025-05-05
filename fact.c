#include <stdio.h>
double fact(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("%e",fact(n));
    return 0;
}

double fact(int n){
    if(n>=1)return n*fact(n-1);
    else return 1;
}