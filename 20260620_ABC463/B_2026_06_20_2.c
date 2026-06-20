/*
電車の空席確認プログラム
*/

#include <stdio.h>
int main(){
    int n, resu, han=0, i, j;
    int a[1000][1000];
    char re;

    scanf("%d %c", &n, &re);
    for(i = 0; i < n; i++){
        for(j = 0; j < 5; j++){
            scanf(" %c", &a[i][j]);
        }
    }

    switch(re){
        case 'A':
            resu = 0;
            break;
        case 'B':
            resu = 1;
            break;
        case 'C':
            resu = 2;
            break;
        case 'D':
            resu = 3;
            break;
        case 'E':
            resu = 4;
            break;
    }
    for(i = 0; i < n; i++){
        if(a[i][resu] == 'o'){
            han = 1;
        }
    }

    if(han == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}