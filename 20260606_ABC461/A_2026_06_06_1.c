/*
防御できるかどうかの判別
*/

#include <stdio.h>
int main(){
    int a, d;
    scanf("%d %d", &a, &d);

    if(a <= d){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}