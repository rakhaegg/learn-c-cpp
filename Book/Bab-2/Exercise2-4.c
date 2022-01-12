/*
    This program remove character 
*/

#include <stdio.h>

#define MAXLINE 1000


char line[MAXLINE];

int my_getline(void);
void squeeze(void);
void sequeence_modify(void);
int main(){
    int len;
    while ( (len = my_getline() ) > 0 )
    {
        sequeence_modify();
        printf("%s" , line);
    }
    return 0;
}
int my_getline(void){
    int c, i;
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF &&c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
void squeeze(void){
    int i , j;
    for ( j = i = 0; line[i] != '\0'; i++)
    {
        /*
            r a k h a

            a 
            line[0] = line[0]
            k
            line[1] = line[1]
            Increment make j always increase when 
            character not same with 'r'
        */

        if (line[i] != 'r'){
            /* if j++ make error*/
            line[++j] = line[i];
        }
    }
    /* When Done */
    line[j] = '\0';
}

void sequeence_modify(void){
    char s[] = "elang\0"; /* deklarasi and define */
    int i , j;
    /*
        Using Two Pointer
        So 
    */
    for ( j  = i = 0; s[i] != '\0' ; i++)
    {
        if(s[i] !=  line[i]){
            line[++j] = line[i];
        }
    }
    line[j] = '\0';    
}