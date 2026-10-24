#include <stdio.h>

int main(){

    int a, b, sum=0, h;

    scanf("%d %d", &a, &b);
    sum = a + b;
    h = sum / 10;

    printf("%d\n", h+1);

    return 0;
}