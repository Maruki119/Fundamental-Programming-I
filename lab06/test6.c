#include <stdio.h>

int main(){

    float promotion, minute, fee;

    printf("Promotion Half price : ");
    scanf("%f", &promotion);
    printf("Your usage time : ");
    scanf("%f", &minute);
    fee = (minute*1.5)-(promotion/2);
    printf("Fee: %.2f bath", fee);

    return 0;
}
