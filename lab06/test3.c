#include <stdio.h>

int main(){

    char choice;

    printf("Please input single letter: ");
    scanf("%c", &choice);

    switch(choice){
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
            printf("The digit 2 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            printf("The digit 3 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'G':
        case 'g':
        case 'H':
        case 'h':
        case 'I':
        case 'i':
            printf("The digit 4 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'J':
        case 'j':
        case 'K':
        case 'k':
        case 'L':
        case 'l':
            printf("The digit 5 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'M':
        case 'm':
        case 'N':
        case 'n':
        case 'O':
        case 'o':
            printf("The digit 6 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'P':
        case 'p':
        case 'R':
        case 'r':
        case 'S':
        case 's':
            printf("The digit 7 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'T':
        case 't':
        case 'U':
        case 'u':
        case 'V':
        case 'v':
            printf("The digit 8 coresponds to the letter %c on the telephone.", choice);
            break;
        case 'W':
        case 'w':
        case 'X':
        case 'x':
        case 'Y':
        case 'y':
            printf("The digit 9 coresponds to the letter %c on the telephone.", choice);
            break;
        default:
            printf("Their is not digit on the telephone that coresponds to %c.", choice);
            break;
    }

    return 0;
}
