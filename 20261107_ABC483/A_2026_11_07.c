#include <stdio.h>

int main(){
    int n, ans=0;
    
    scanf("%d", &n);
    ans = n / 2;
    if(n % 2 != 0){
        ans++;
    }
    printf("%d\n", ans);

    return 0;
}