/*.のみの最上,下行＆最右,左列を削除して出力*/

#include <stdio.h>
#include <string.h>
int main(){
    int h, w, i, j, han;
    char c[100][100];

    scanf("%d %d", &h, &w);
    for(i = 0; i < h; i++){
            scanf("%s", c[i]);
    }

    while(1){
        han = 0;
        for(i = 0; i < w; i++){
            if(c[0][i] == '#'){
                han = 1;
                break;
            }
        }
        if(han == 1){
            break;
        }
        for(i = 0; i < h-1; i++){
            strcpy(c[i], c[i+1]);
        }
        h--;
    }
    while(1){
        han = 0;
        for(i = 0; i < w; i++){
            if(c[h-1][i] == '#'){
                han = 1;
                break;
            }
        }
        if(han == 1){
            break;
        }
        h--;
    }
    while(1){
        han = 0;
        for(i = 0; i < h; i++){
            if(c[i][0] == '#'){
                han = 1;
                break;
            }
        }
        if(han == 1){
            break;
        }
        for(i = 0; i < h; i++){
            for(j = 0; j < w-1; j++){
                c[i][j] = c[i][j+1];
            }
            c[i][w-1] = '\0';
        }
        w--;
    }
    while(1){
        han = 0;
        for(i = 0; i < h; i++){
            if(c[i][w-1] == '#'){
                han = 1;
                break;
            }
        }
        if(han == 1){
            break;
        }
        for(i = 0; i < h; i++){
            c[i][w-1] = '\0';
        }
        w--;
    }

    for(i = 0; i < h; i++){
        printf("%s\n", c[i]);
    }

    return 0;
}