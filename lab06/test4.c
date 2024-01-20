#include <stdio.h>

int main(){

    char choice;

    printf("Please input single letter: ");
    scanf("%c", &choice);

    if((choice>='A'&&choice<='C') || (choice>='a'&&choice<='c')){
        printf("The digit 2 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='D'&&choice<='F') || (choice>='d'&&choice<='f')){
        printf("The digit 3 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='G'&&choice<='I') || (choice>='g'&&choice<='i')){
        printf("The digit 4 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='J'&&choice<='L') || (choice>='j'&&choice<='l')){
        printf("The digit 5 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='M'&&choice<='O') || (choice>='m'&&choice<='o')){
        printf("The digit 6 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='P'&&choice<'Q' || choice>='p'&&choice<'q') || (choice>'Q'&&choice<='S' || choice>'q'&&choice<='s')) {
        printf("The digit 7 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='T'&&choice<='V') || (choice>='t'&&choice<='v')){
        printf("The digit 8 coresponds to the letter %c on the telephone.", choice);
    }
    else if((choice>='W'&&choice<='Y') || (choice>='w'&&choice<='y')){
        printf("The digit 9 coresponds to the letter %c on the telephone.", choice);
    }
    else{
        printf("Their is not digit on the telephone that coresponds to %c.", choice);
    }

    return 0;
}
