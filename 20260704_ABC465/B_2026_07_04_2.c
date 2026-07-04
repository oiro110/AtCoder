/*駐車料金計算*/

#include <stdio.h>
int main(){
    int x, y, l, r, a, b, i, money=0;   //l~rまではx円、それ以外はy円、a~bの間駐車

    scanf("%d %d %d %d %d %d", &x, &y, &l, &r, &a, &b);

    for(i = a; i < b; i++){
        if((l <= i) && (i < r)){
            money += x;
        }else{
            money += y;
        }
    }

    printf("%d", money);

    return 0;
}