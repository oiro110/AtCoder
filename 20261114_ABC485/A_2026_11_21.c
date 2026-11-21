#include <stdio.h>

int main(){
    int a, b, ans=0;
    
    scanf("%d %d", &a, &b);
    
    if((a < 0 && b < 0) || (a > 0 && b > 0)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}