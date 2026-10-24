#include <stdio.h>

int main(){
    int n, k, a[256], h=0, i;

    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i++){
        if(((a[i] <= k) && (k <= a[i+1])) || ((a[i] >= k) && (k >= a[i+1]))){
            h++;
        }
    }
    for(i = 1; i < n-1; i++){
        if(a[i] == k){
            h--;
        }
    }

    printf("%d\n", h);

    return 0;
}