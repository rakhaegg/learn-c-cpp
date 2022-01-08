#include <stdio.h>


int main(){
    int  x= 8;

    int y = 7;

    x++;

    printf("%d \n " , x);

    x+= y--;
    
    printf("%d \n " , y);

    printf("%d \n " , x);

    return 0;
}