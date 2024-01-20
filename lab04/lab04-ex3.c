#include <stdio.h>

int main(){

    int integer;

    printf("Enter an integer number: ");
    scanf("%d", &integer);

    if(integer >= 0){
        printf("\nThe number you enter is positive.");
    }
    else{
        printf("\nThe number you enter is negative.");
    }

    return 0;
}
