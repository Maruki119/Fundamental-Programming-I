/*  Name: Mr.Nititorn Kijprasopchok
    ID  : 6530300295
    Desc: Exercise 4 */

#include <stdio.h>

int main(){

    int num1, num2, num1_cal, num2_cal, count_num=0, i = 1, j=1;
    int count_total=0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    num1_cal=num1;
    num2_cal=num2;

    while(num1_cal<=num2_cal){

        count_num = 0;
        i = 1;

            while(i<=num1_cal){
                if(num1_cal%i==0){
                    count_num++;
                }
                i++;
            }
            if(count_num==2){
                count_total++;
            }
            num1_cal++;
    }
    if(count_total >= 2){
    printf("\nThere are %d prime numbers between %d and %d.\n", count_total, num1, num2);
}
    num1_cal=num1;
    num2_cal=num2;
    count_total = 0; //reset count_total to 0

    while(num1_cal<=num2_cal){

        count_num = 0;
        i = 1;

            while(i<=num1_cal){
                if(num1_cal%i==0){
                    count_num++;
                }
                i++;
            }
            if(count_num==2){
                printf("%d ", num1_cal);
                if(num1_cal<=num2){
                    printf(", ");
                }
                count_total++;
            }
            num1_cal++;
    }
    if(count_total >= 2){
        printf("\b\bare prime numbers.");
    }
    else{
        printf("\b\bis the only one prime number between %d and %d.", num1, num2);
    }

    return 0;
}
