#include <stdio.h>


int main(){

    int score = 89;

    if (score < 75){
        printf("You passed  \n");
    }else{
        printf("Not passed \n");
    }


    int num = 41;

    num += 1;

    if (num == 42){
        printf("You Won\n");
    }else{
        printf("False\n");
    }



    int y ;

    int x = 3;

    y = (x >= 5) ? 5 : x;

    printf("%d \n" , y);
    return 0;
}