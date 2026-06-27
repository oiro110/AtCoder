/*文字列からEとWを数えて多い方を勝者にするプログラム*/

#include <stdio.h>
int main(){
    char s[1000];
    int e=0, w=0, i;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == 'E'){
            e++;
        }
        if(s[i] == 'W'){
            w++;
        }
    }

    if(e < w){
        printf("West\n");
    }else{
        printf("East\n");
    }

    return 0;
}