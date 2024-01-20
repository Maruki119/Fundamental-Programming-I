/*  Name: Mr.Nititorn Kijprasopchok
    ID  : 6530300295
    Desc: Exercise 1 */

#include <stdio.h>

int main(){

    int number;

    while(number != -1){

        printf("Pleas enter a number (-1 to exit): ");
        scanf("%d", &number);
        printf("\n");

        if(number != -1){
            for(int i = 1; i <= 12; ++i){
                printf("%d*%d = %d\n", number, i, number*i);
            }
            printf("\n");
        }
    }

    printf("Good Bye! I\n");
    printf("will miss you.");

    return 0;
}
