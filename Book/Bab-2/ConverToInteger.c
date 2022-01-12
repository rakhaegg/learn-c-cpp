#include <stdio.h>

int atoi(char s[]); /*Function for conversion */
int main(){

    
    int result =atoi("129");

    printf("%d" , result);
    return 0;
}

/* atoi : convert from string to integer */
int atoi(char s[]){
    int i , n ;

    n = 0;

    for(i = 0; s[i] >= '0' && s[i] <= '9' ; i++){
        /*
            s[i] - '0'
            
            '1' - '0' = 1
        */
        n = 10 * n + (s[i] - '0');
    }
    return n;
}