#include <stdio.h>

int main(){

    int number, count_number = 0, i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){
       if(number%i==0){ //ex. 6/1 = 0 count 1, 6/2 = 0 count 2, 6/3 = 0 count 3 until it reach to input number.
            count_number++; //counting number from above condition.
       }
    }

    if(count_number == 2){ //mean it has only 1 and itself from int i that counted
        printf("\n%d is a prime number", number);
    }
    else{
        printf("\n%d is not a prime number", number);
    }

    return 0;
}
