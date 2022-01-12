/*
    * In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
    * in x. Explain why. Use this observation to write a faster version of bitcount.

*/
#include <stdio.h>

int bitcount(unsigned x);
int main(){

    int len = bitcount(11);
    
    printf("%d\n" , len);
    return 0;
}
/*  bitcount : count 1 bit*/
int bitcount(unsigned x){
    int b;
    /* Right Shift Operator */
    for(b = 0 ; x != 0 ; x >>= 1){
        if (x & 01){ /* If binary from decimal have result at lest 1 AND 01 */
            b++; /*Count 1 beacause 01 */
        }
    }
    return b;
}
