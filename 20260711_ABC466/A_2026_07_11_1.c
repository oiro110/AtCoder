/*嬉しさが府になる場合はYesを出力するプログラム*/

#include <stdio.h>

int main(){
    int n, i, han=0;
    int x[10000] = {0};

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(x[i] >= 0){
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