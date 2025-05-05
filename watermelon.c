/*Problem: 4A */
#include <stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    if(i % 2 == 0 && i != 2){
        printf("YES");
    }else{printf("NO");}
    return 0;
}