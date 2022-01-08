#include <stdio.h>


void sayHello();

int main(){
    int i;

    for ( i = 0; i < 5; i++)
    {
        sayHello();
    }

    return 0;   
}

void sayHello(){
    static int num_calls = 1;
    printf("Hello Number %d \n" , num_calls);

    num_calls++;
}