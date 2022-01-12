#include <stdio.h>


int main(){


    int tab , new_line , blank , c;
    tab = 0 ;
    new_line = 0 ;
    blank = 0;
    while ((c = getchar()) != EOF){
        if (c == '\t'){
            ++tab;
        }if (c == '\n'){
            ++new_line;
        }if (c  == '\0'){
            ++blank;
        }
    }
    
    printf("Tab : %d New Line : %d Blank : %d" , tab , new_line , tab);


    return 0;
}