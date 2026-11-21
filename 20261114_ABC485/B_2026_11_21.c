#include <stdio.h>

int main(){
    int n, m;
    char s[256][256];
    
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%s", s[i]);
    }

    for(int j = 0; j < m; j++){
        int han = 1;
        for(int i = 0; i < n; i++){
            if(s[i][j] != 'x'){
                han = 0;
                break;
            }
        }
        if(han != 0){
            printf("Drain %d\n", j+1);
            return 0;
        }
    }

    for(int i = 0; i < n; i++){
        int han = 1;
        for(int j = 0; j < m; j++){
            if(s[i][j] != 'x'){
                han = 0;
                break;
            }
        }
        if(han != 0){
            printf("Faucet %d\n", i+1);
            return 0;
        }
    }

    return 0;
}