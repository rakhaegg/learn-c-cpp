#include <stdio.h>


void main(){

    int n = 10;
    
    for (int n = 0; n < 5; n++)
    {   
        /* code */
        printf(" Inner Block : %d\n" , n);
    }

    printf("Outer Block : %d\n" , n++);   
}