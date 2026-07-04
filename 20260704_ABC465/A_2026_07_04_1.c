/*A > B * (2/3)であるかの確認*/

#include <stdio.h>
int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > (b * 2 / 3)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}