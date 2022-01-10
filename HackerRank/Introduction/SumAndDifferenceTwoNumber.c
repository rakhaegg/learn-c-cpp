#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int a , b;
    float fa , fb;

    scanf("%d  %d" ,  &a , &b);
    scanf("%f  %f" ,  &fa , &fb);



    printf("%d %d\n" , a+b , a-b);
    printf("%.1f %.1f" , fa+fb , fa-fb);
    
    
    return 0;
}