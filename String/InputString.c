#include <stdio.h>

void use_gets();



int main(){

    char first_name[25];

    int age;

    printf("Enter Your First Name and Age : \n");
    scanf("%s %d" , first_name , &age);

    printf("\n Hi , %s. Your age is %d\n" , first_name ,age);

    printf("-------------------------------------\n");

  

    return 0;

}

void use_gets(){
    
    
}