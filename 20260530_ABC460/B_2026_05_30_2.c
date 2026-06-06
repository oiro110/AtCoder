/*
任意の回数2つの円が接するか接しないかの判断をするプログラム
*/

#include <stdio.h>
int main(){
    long long int t, x1, y1, r1, x2, y2, r2, i, d, w, s;
    scanf("%lld", &t);
    for(i = 0; i < t; i++){
        scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);
        d = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        w = (r1 + r2) * (r1 + r2);
        s = (r1 - r2) * (r1 - r2);
        
        if(s <= d && d <= w){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}