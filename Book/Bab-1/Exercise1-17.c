// Print word where length more than 80 character

#include <stdio.h>
#define MAXLINE 1000 /* maximum input lenght */

int my_getline(char line[] , int maxline);

int main(){

    int len; /* current line length */
    

    char line[MAXLINE]; /* Current input line */

    while ((len = my_getline(line , MAXLINE)) > 0)
    { 
        if (len > 80){
            printf(" The Word More Then 80  : %s\n" , line);
        }
        printf("Word : %s\n", line);
        printf("Length : %d\n" , len);
    }
    

    return 0;

}
/* geline : read a line into char s and return length */
int my_getline(char s[] , int lim){

    int c , i;

    for ( i = 0 ; i < lim - 1 && (c = getchar() ) != EOF && c != '\n' ; ++i ){
        s[i] = c;
        if (c == '\n'){
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}