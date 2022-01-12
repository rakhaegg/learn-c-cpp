#include <stdio.h>
#define MAXLINE 1000


char line[MAXLINE];
int upper_lower(void);
int main(){
    int len;
    while ((len = upper_lower() ) > 0)
    {
        printf("%s\n" , line );
    }
    return 0;
}
int upper_lower(void){
    int c , i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'  ; ++i)
    {   
        line[i] = c;
    
        if (line[i] >= 'A' && line[i] <= 'Z'){/* Check if char is Uppercase*/
            line[i] = line[i] + 32; /* + 32 Look to ASCII Table */
        }   
        if(c == '\n'){
            line[i] = c;
            ++i;
        }
    }
    line[i] = '\0';
    return i;
}