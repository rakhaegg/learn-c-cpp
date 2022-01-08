#include <stdio.h>



void another();
int main(){
    char str1[6] = "hello";

    char str2[ ] = "world";

    printf("str1 is %s , str2 is %s \n" , str1 , str2);

    another();

    return 0;
}


void another(){
    char str3[6] = {'h' , 'e' , 'l', 'l' , 'o' , '\0'};

    char str4[ ] = {'h' , 'e' , 'l', 'l' , 'o' , '\0'};

    printf("str3 is %s , str4 is %s " , str3 , str4);



}