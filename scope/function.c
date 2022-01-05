#include <stdio.h>

void main(){

    {
        goto label;
        label:;
    }

    goto label;
}