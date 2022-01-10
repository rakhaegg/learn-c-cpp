#include <stdio.h>


// Conversion Celcius to Fahreinheit
int main(){

    float celcius , fahrenheit;
    float lower , upper, step;


    lower = 0;
    upper = 1000;
    step = 100;

    celcius  = lower;


    while (celcius <= upper)
    {
        fahrenheit = (celcius * (9/5)) + 32;

        printf("%3.0f %6.1f\n" , celcius , fahrenheit);


        celcius = celcius + step;

    }
    

    



    return 0;
}