/*指定された色の最大の大きさを出力(ない場合は-1を出力)*/

#include <stdio.h>

int main(){
    int i, n, m;
    int c[1000], s[1000], max[1000];
    
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++){
        max[i] = -1;
    }
    for(i = 0; i < n; i++){
        scanf("%d %d", &c[i], &s[i]);
        if(max[c[i] - 1] < s[i]){
            max[c[i] - 1] = s[i];
        }
    }

    for(i = 0; i < m; i++){
        printf("%d ", max[i]);
    }
    printf("\n");

    return 0;
}