#include <stdio.h>
#include <string.h>

int main(){

    float height, width, radius, base;
    float pi = 3.1416;
    char select_choice;

    printf("[r] Rectangle\n");
    printf("[c] Circle\n");
    printf("[t] Triangle\n");
    printf("[x] Exit\n\n");

    do{
        printf("Select r/c/t/x: ");
        scanf("%c", &select_choice);

        switch(select_choice){
            case 'R':
            case 'r':
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter width: ");
                scanf("%f", &width);
                printf("Area of this rectangle is %.2f\n\n", height*width);
                break;
            case 'C':
            case 'c':
                printf("Enter radius: ", radius);
                scanf("%f", &radius);
                printf("Area of this circle is %.2f\n\n", radius*pi);
                break;
            case 'T':
            case 't':
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter base: ");
                scanf("%f", &base);
                printf("Area of this triangle is %.2f\n\n", base*height*1/2);
                break;
            case 'X':
            case 'x':
                printf("\nBye!");
                break;
            default:
                printf("\nInvalid command!\n\n");
                break;
            }
    }while(select_choice != 'x');
    return 0;
}
