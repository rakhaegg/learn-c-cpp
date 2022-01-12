#include <stdio.h>


int main(){


    int c , i , nwhite , nother , count;
    
    nother , nwhite , count = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z')){
            ++count;
        }else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }else{
            ++nother;
        }
    }
    printf("Length Word : %d\n " , count);
    printf("White Space : %d  , Other = %d " , nwhite , nother);



    return 0;
}