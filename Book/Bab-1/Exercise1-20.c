/*
    Implementasi Extern
    BUT, in this case, 
    you need to access the global variable using EXTERN.
*/
/* DETAB */
#include <stdio.h>
#define MAXLINE 1000


char line[MAXLINE];
int max;
int my_getline(void);


int main(){
    int len;

    extern int max;
    max = 80;

    while ((len = my_getline()) > 0 )
    {
        
        printf("Word Is : %s \n" , line);
    }
    
    return 0;
}
int my_getline(void){

    int c , i;

    extern char line[];

    for(i = 0 ; i < MAXLINE - 1  && (c = getchar()) != EOF && c != '\n' ; ++i   ){
        line[i] = c;
        if ( c == '\n'){
            line[i] = c;
            ++i;
        }
        if (c == '\t'){
            line[i] = '1';
        }
    }
    line[i] = '\0';
    return i ;
}
