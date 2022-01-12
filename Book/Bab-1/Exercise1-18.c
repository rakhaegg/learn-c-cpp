/* 
Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

void my_getline(char line[] , int maxline);


int main(){

    int len; /* current line length */

    char line[MAXLINE]; /* current input line */



    while ((len = my_getline(line , MAXLINE)) > 0)
    {
    
        printf("%s" , line);
    }
    

    return 0;
}
void my_getline(char s[] , int lim){

    int c , i;

    for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && i != '\n'; i++)
    {
        s[i] = c;
        if (){
            
        }
    }
    
}