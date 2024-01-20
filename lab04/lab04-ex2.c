#include <stdio.h>
#include <string.h>

int main(){

    char correct_password[10] = "Bourne007";
    char password[10];

    printf("Enter your password: ");
    scanf("%s", password);

    if(strcmp(password, correct_password) == 0){
        printf("\nAccess Granted!\n");
        printf("Welcome to MI6.");
    }
    else{
        printf("\nAccess Denied!\n");
        printf("Program terminated.");
    }

    return 0;
}
