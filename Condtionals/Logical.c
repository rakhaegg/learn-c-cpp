#include <stdio.h>


int main(){

    int n = 42;

    if ( n == 999 || n >= 0 && n < 100){
        printf("Yes");
    }

    if (!(n == 'x' || n == 'X')){
        printf("Roma numeral is not 10 \n");
    }


    return 0;
}