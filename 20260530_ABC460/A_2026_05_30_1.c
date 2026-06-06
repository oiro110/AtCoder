/*
余りが出なくなるまでの回数を求めるプログラム
*/

#include <stdio.h>
int main(){
    int n, m, i;
    scanf("%d %d", &n, &m);
    for(i = 0; m != 0; i++){
        m = n % m;
    }
    printf("%d\n", i);

    return 0;
}