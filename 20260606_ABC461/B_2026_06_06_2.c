/*
木こりが嘘をついているかついていないか
*/

#include <stdio.h>
int main(){
    int n, a[1000], b[1000], i, han = 0 , tmp;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++){
        tmp = b[i];
        //printf("%d：%d, %d, %d\n", i, tmp, b[i], a[tmp-1]);     //デバック用(ブレークポイント使用不可だったため)
        if(i+1 != a[tmp-1]){
            han = 1;
        }
    }

    if(han == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}