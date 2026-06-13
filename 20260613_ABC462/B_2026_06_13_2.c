/*
ギフトを送ってくれた人数と人を出力
*/

#include <stdio.h>
int main(){
    int n, no, sk, i, j, a[200][200], cou[200];

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &no);
        for(j = 0; j < no; j++){
            scanf("%d", &sk);
            a[sk][cou[sk]] = i;
            cou[sk]++;
        }
    }

    for(i = 1; i <= n; i++){
        printf("%d ", cou[i]);
        for(j = 0; j < cou[i]; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}