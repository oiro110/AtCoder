/*見張りの隙の数カウントプログラム*/

#include <stdio.h>

int main(){
    int m, d, i, j, l, r, ans;
    char s[128] = {0}, sf[128] = {0};

    scanf("%d %d", &m, &d);
    scanf("%s", s);
    for(i = 0; i < m; i++){
        if(s[i] == 'G'){
            l = i - d;
            r = i + d;
            if(l < 0){
                l = 0;
            }
            if(r > m - 1){
                r = m -1;
            }
            for(j = l; j <= r; j++){
                sf[j] = 1;
            }
        }
    }

    ans = 0;
    for(i = 0; i < m; i++){
        if(sf[i] == 0){
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}