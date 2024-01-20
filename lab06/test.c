#include <stdio.h>

int main(){

    int number1, number2, i, count_num, count_prime = 0;
    int number1_cal, number2_cal;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    number1_cal = number1;
    number2_cal = number2;
    number1_cal += 1;
    number2_cal -= 1;

    while(number1_cal <= number2_cal){

        count_num = 0;
        i = 1;

        while(i <= number1_cal){
            if(number1_cal%i==0){
                count_num++;
            }
            i++;
        }
        if(count_num == 2){
            printf("%d ", number1_cal);
            count_prime++;
        }
        number1_cal++;
    }

    if(count_prime == 1){
        printf("\n%d is the only one prime number between %d and %d",number1_cal , number1, number2);
    }
    else{
        printf("\nThere are %d prime number between %d and %d.", count_prime, number1, number2);
    }

    return 0;
}
