#include <stdio.h>

int main(){

    int num1, num2, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1%2 == 0){
        for(i = num1; i<=num2 ;i+=2){
            printf("%d ", i);
        }
    }
    else{
        for(i = num1+1; i<=num2 ;i+=2){
            printf("%d ", i);
        }
    }
    return 0;
}
