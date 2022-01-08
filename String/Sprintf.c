#include <stdio.h>

int main(){
    char info[100];

    char dept[ ] = "HR";
    int emp = 75;


    //Building a string from other data types
    sprintf(info , "The %s dept has %d employees" , dept , emp);


    printf("%s\n" , info);

    return 0;

}