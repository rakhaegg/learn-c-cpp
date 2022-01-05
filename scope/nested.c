#include <stdio.h>

void main(){


    int outer = 1;

    {
        int outer = 2;

        printf("%d\n" , outer );

    }
    printf("%d\n", outer);
}
