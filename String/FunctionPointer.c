#include <stdio.h>

//Function
void say_hello(int num_items);

int main(){
    
    //Function Pointer
    void (*funptr)(int);


    //Pointer Assignment
    funptr = say_hello;

    //Function Call
    funptr(3);


    return 0;
}

void say_hello(int num_times){
    int k;

    for (k  = 0; k < num_times; k++)
    {
        printf("Hello\n");
    }
    
}