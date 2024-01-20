#include <stdio.h>

int main(){

    int index[10], count=0, number;

    do{
        printf("Enter a number (-1 to exit): ");
        scanf("%d", number);

        if(number !=- 1){
            index[count] = number;
            count++;
        }
    }while(number != -1);

    return 0;
}
