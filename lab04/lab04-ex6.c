#include <stdio.h>

int main(){

    int nb1, nb2, nb3, nb4, nb5;

    printf("Input1#:");
    scanf("%d", &nb1);
    printf("Input2#:");
    scanf("%d", &nb2);
    printf("Input3#:");
    scanf("%d", &nb3);
    printf("Input4#:");
    scanf("%d", &nb4);
    printf("Input5#:");
    scanf("%d", &nb5);

    if(nb1 > nb2 && nb1 > nb3 && nb1 > nb4 && nb1 > nb5){
        printf("\nMaximum: %d", nb1);
    }
    else if(nb2 > nb1 && nb2 > nb3 && nb2 > nb4 && nb2 > nb5){
        printf("\nMaximum: %d", nb2);
    }
    else if(nb3 > nb1 && nb3 > nb2 && nb3 > nb4 && nb3 > nb5){
        printf("\nMaximum: %d", nb3);
    }
    else if(nb4 > nb1 && nb4 > nb2 && nb4 > nb3 && nb2 > nb5){
        printf("\nMaximum: %d", nb4);
    }
    else{
        printf("\nMaximum: %d", nb5);
    }

    if(nb1 < nb2 && nb1 < nb3 && nb1 < nb4 && nb1 < nb5){
        printf("\nMinimum: %d", nb1);
    }
    else if(nb2 < nb1 && nb2 < nb3 && nb2 < nb4 && nb2 < nb5){
        printf("\nMinimum: %d", nb2);
    }
    else if(nb3 < nb1 && nb3 < nb2 && nb3 < nb4 && nb3 < nb5){
        printf("\nMinimum: %d", nb3);
    }
    else if(nb4 < nb1 && nb4 < nb2 && nb4 < nb3 && nb2 < nb5){
        printf("\nMinimum: %d", nb4);
    }
    else{
        printf("\nMinimum: %d", nb5);
    }

    return 0;
}
