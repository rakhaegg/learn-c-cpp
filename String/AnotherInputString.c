#include <stdio.h>

int main(){
      char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name , 50 , stdin);
    
    printf("\nHi, %s.", full_name);


    return 0;

}