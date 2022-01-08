#include <stdio.h>



int main(){
    int x1 = 42;

    float x2 = 3.14;

    char x3 ='a';

    void * arr[ ] = {&x1 , &x2 , &x3};

    printf("%d %f %c", *((int *)arr[0]) , *((float *)arr[1]) , *((char * ) arr[2]) );
}
