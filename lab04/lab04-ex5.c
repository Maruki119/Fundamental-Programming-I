#include <stdio.h>

int main(){

    char light_color;

    printf("Input traffic light color (R=Red,G=Green) : ");
    scanf("%c", &light_color);

    switch(light_color){
        case 'R':
            printf("\nStop!");
            break;
        case 'G':
            printf("\nGo!");
            break;
    }

    return 0;
}
