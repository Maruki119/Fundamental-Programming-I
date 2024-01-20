/*  Name: Mr.Nititorn Kijprasopchok
    ID  : 6530300295
    Desc: Exercise 3 */

#include <stdio.h>

int main(){

    int size;

    printf("Enter the size of triangle: ");
    scanf("%d", &size);
    printf("\n");

    for(int i = 1; i <= size; i++){
        for(int j = size; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
