/*
文字&数列から数字だけを取り出して出力
*/

#include <stdio.h>
int main(){
    int i;
    char a[100];

    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if((a[i] >= '0') && ('9' >= a[i])){
            printf("%c", a[i]);
        }
    }

    return 0;
}