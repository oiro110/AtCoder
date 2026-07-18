/*日本基準で肥満かどうかを判断するプログラム*/
/*なぜか1ケースだけ失敗になる*/

#include <stdio.h>

int main(){
    double h, w, ha, bmi;
    scanf("%lf %lf", &h, &w);

    ha = h / 100.0;
    bmi = w / ha / ha;
    if(bmi < 25.0){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}