#include <stdio.h>


int main(){

    char city[40];
    
    printf("Enter your favourite city : ");
    fgets(city , 40 , stdin);



    
    //Output
    fputs(city , stdout);
    printf(" is a fun city . ");



    return 0;
}