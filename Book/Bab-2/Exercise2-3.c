/*
    Convert String HEXA to int

*/

#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];

int hex_to_int(void);
void convert(void);

int main(){


    int len;
    while ((len = hex_to_int()) > 0)
    {
        convert();
        printf("%s" , line);
    }
    
    return 0;
}

/* hex_to_int : convert from hex to int */
int hex_to_int(){
    int c , i;
    for(i = 0 ; i < MAXLINE && (c = getchar()) != EOF && c != '\n'; ++i ){
        line[i] = c;

        if (c == '\n'){
            line[i] = c;
            ++i;
        }
    }
    line[i]  = '\0';
    return i;
}
void convert(void){
    
}