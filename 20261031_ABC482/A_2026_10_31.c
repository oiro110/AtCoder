#include <stdio.h>

int main(){
    int i, sum=0;
    char a[64];

    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] == 'o'){
            sum++;
        }
    }
    if(sum % 2 == 0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}