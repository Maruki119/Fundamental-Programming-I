#include <stdio.h>

int main(){

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    for(int i = 0; i < number; i++){
        for(int j = 0; j < number/2; j++){
            if(i%2 == 0){
                printf("o ");
            }
            else{
                printf("x ");
            }
            if(i%2 == 1){
                printf("o ");
            }
            else{
                printf("x ");
            }
        }
        if(i%2 == 0 && number%2 == 1){
            printf("o\n");
        }
        else if(i%2 == 1 && number%2 == 1){
            printf("x\n");
        }
        else{
            printf("\n");
        }
    }

    return 0;
}
