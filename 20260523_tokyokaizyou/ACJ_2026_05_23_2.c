/*
与えられた英小文字を判別して数値化するプログラム。
*/
#include <stdio.h>
int main(){
    char str[20], str2[100];
    int suu, i;

    scanf("%d", &suu);
    for(i = 0; i < suu; i++){
        scanf("%s", str);
        if(str[0] == 'a' || str[0] == 'b' || str[0] == 'c'){
            str2[i] = '2';
        }else if(str[0] == 'd' || str[0] == 'e' || str[0] == 'f'){
            str2[i] = '3';
        }else if(str[0] == 'g' || str[0] == 'h' || str[0] == 'i'){
            str2[i] = '4';
        }else if(str[0] == 'j' || str[0] == 'k' || str[0] == 'l'){
            str2[i] = '5';
        }else if(str[0] == 'm' || str[0] == 'n' || str[0] == 'o'){
            str2[i] = '6';
        }else if(str[0] == 'p' || str[0] == 'q' || str[0] == 'r' || str[0] == 's'){
            str2[i] = '7';
        }else if(str[0] == 't' || str[0] == 'u' || str[0] == 'v'){
            str2[i] = '8';
        }else if(str[0] == 'w' || str[0] == 'x' || str[0] == 'y' || str[0] == 'z'){
            str2[i] = '9';
        }
    }
    str2[i] = '\0';

    printf("%s\n", str2);

    return 0;

}