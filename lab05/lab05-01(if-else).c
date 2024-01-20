#include <stdio.h>

int main(){

    int i = 1;
    float height, width, radius, base;
    float pi = 3.1416;
    char select_choice;

    printf("[r] Rectangle\n");
    printf("[c] Circle\n");
    printf("[t] Triangle\n");
    printf("[x] Exit\n");

    do{
        printf("\nSelect r/c/t/x: ");
        scanf("%c", &select_choice);


            if(select_choice == 'R' || select_choice == 'r'){
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter width: ");
                scanf("%f", &width);
                printf("Area of this rectangle is %.2f\n\n", height*width);
            }
            else if(select_choice == 'C' || select_choice == 'c'){
                printf("Enter radius: ", radius);
                scanf("%f", &radius);
                printf("Area of this circle is %.2f\n\n", radius*pi);
            }
            else if(select_choice == 'T' || select_choice == 't'){
                printf("Enter height: ");
                scanf("%f", &height);
                printf("Enter base: ");
                scanf("%f", &base);
                printf("Area of this triangle is %.2f\n\n", base*height*1/2);
            }
            else{
                printf("\nInvalid command\n");
        }
    }while(i<=100);

    printf("\nBye!");

    return 0;
}
