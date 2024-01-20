#include <stdio.h>

int main(){

    int nb1, nb2;

    printf("Enter two integer numbers: ");
    scanf("%d%d", &nb1, &nb2);

    if(nb1 < nb2){
        printf("\nUp!");
    }
    else if(nb2 < nb1){
        printf("\nDown!");
    }
    else{
        printf("\nEqual!");
    }

    return 0;
}
