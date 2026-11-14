#include <stdio.h>

int main(){
    int n, q, k, i, j, l;
    int c[256], tmp[256];
    scanf("%d %d", &n, &q);

    for(i = 0; i < n; i++){
        c[i] = i + 1;
    }
    for(i = 0; i < q; i++){
        scanf("%d", &k);
        for(j = 0; j < k; j++){
            tmp[j] = -1 * c[k - 1 - j];
        }
        for(l = 0; l < k; l++){
            c[l] = tmp[l];
        }
    }

    for(i = 0; i < n; i++){
        printf("%d\n", c[i]);
    }

    return 0;
}