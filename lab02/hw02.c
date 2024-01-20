/*  Name: Mr.Nititorn Kijprasopchok
    ID  : 6530300295
    Desc: Exercise Hw02 */

#include <stdio.h>

int main(){

    int Score;

    printf("Score = ");
    scanf("%d", &Score);

    if(Score >= 80){
        printf("A");
    }
    else if(Score >= 70){
        printf("B");
    }
    else if(Score >= 60){
        printf("C");
    }
    else if(Score >= 50){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}

