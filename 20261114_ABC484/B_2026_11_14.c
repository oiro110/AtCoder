#include <stdio.h>

int main(){
    int k, a[16], ans = 10, h = 1;
    
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        scanf("%d", &a[i]);
        if(ans > a[i]){
            ans = a[i];
        }
        if(a[i] == 9){
            h = 0;
        }
    }

    if(h != 0){
        ans = -1;
    }
    
    printf("%d\n", ans);

    return 0;
}