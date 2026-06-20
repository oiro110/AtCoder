/*
縦、横のピクセル数を取得して16:9であるかの判別を行うプログラム
*/

#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if((x * 9) == (y * 16)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}