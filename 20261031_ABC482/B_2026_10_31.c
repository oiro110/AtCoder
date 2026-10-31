#include <stdio.h>

int main(){
    int i, j, cou=0, ans = 5;
    char s[8][8];

    for(i = 0; i < 5; i++){
        scanf("%s", &s[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0, cou = 0; j < 5; j++){
            if(s[i][j] == 'o'){
                cou++;
            }
        }
        if(5 - cou < ans ){
            ans = 5 - cou;
        }
    }
    for(j = 0; j < 5; j++){
        for(i = 0, cou = 0; i < 5; i++){
            if(s[i][j] == 'o'){
                cou++;
            }
        }
        if(5 - cou < ans ){
            ans = 5 - cou;
        }
    }
    for(i = 0, cou = 0; i < 5; i++){
        if(s[i][i] == 'o'){
            cou++;
        }
    }if(5 - cou < ans ){
            ans = 5 - cou;
    }
    for(i = 0, cou = 0; i < 5; i++){
        if(s[i][4-i] == 'o'){
            cou++;
        }
    }if(5 - cou < ans ){
            ans = 5 - cou;
    }

    printf("%d\n", ans);
}