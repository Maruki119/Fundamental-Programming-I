#include <stdio.h>

int main(){

    int number, i;
    int fac_number = 1;

    printf("Enter a number (n): ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++){
        fac_number = fac_number*i;
    }

    printf("\n%d! is %d.", number, fac_number);

    return 0;
}
