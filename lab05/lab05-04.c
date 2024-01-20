#include <stdio.h>

int main(){

    int n = 1, num, sum=0;

    while(n <= 5){
        printf("Enter an integer #%d: ", n);
        scanf("%d", &num);
        n++;
        sum = sum+num;
    }
    printf("\nThe summation is %d.", sum);

    return 0;
}
