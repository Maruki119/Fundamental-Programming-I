#include <stdio.h>

int main(){

    int nb1, nb2, nb3;

    printf("Enter three integer numbers: ");
    scanf("%d%d%d", &nb1, &nb2, &nb3);

    if(nb1 > nb2 && nb1 > nb3){
        printf("\nThe maximum number is %d.", nb1);
    }
    else if(nb2 > nb1 && nb2 > nb3){
        printf("\nThe maximum number is %d.", nb2);
    }
    else{
        printf("\nThe maximum number is %d.", nb3);
    }

    return 0;
}
