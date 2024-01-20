#include <stdio.h>

int main(){

    char ch;

    printf("Input Char: ");
    scanf("%c%c", &ch, &ch);

    if(ch>='A' && ch<='Z'){
        printf("Output: Upper case letter.");
    }
    else if(ch>='a' && ch<='z'){
        printf("Output: Lower case letter.");
    }
    else if((ch>='0' && ch<='127') || (ch<='-1' && ch>='-128')){
        printf("Output: Digit.");
    }
    else{
        printf("Output Others.");
    }

    return 0;
}
