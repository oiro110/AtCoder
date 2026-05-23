/*
与えられた数値に対応する文字を削除して出力するプログラム。
*/
#include <stdio.h>

int main(){
    int a, i;
    char str[] ="HelloWorld";
    scanf("%d", &a);

    for(i = 0; str[i] != '\0'; i++){
        if(i != a - 1){
            putchar(str[i]);
        }
    }
    printf("\n");

    return 0;
}