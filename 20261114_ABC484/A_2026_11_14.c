#include <stdio.h>

int main(){
    int b, r, ans;
    
    scanf("%d %d", &b, &r);
    ans = (30 - b) * (30 - r);
    
    printf("%d\n", ans);

    return 0;
}