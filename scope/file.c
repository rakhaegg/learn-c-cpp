#include <stdio.h>

static int g(int a){ return a;}
int i ;
void main(){

    i = g(20);
    printf("%d\n", i);
    
}
