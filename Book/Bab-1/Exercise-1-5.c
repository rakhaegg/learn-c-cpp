#include <stdio.h>


//Reverse
int main(){

    float celcius , fahrenheit;
    float lower , upper, step;

    upper = 1000;
    step = 100;

   


    for(celcius = 300 ; celcius >= 0 ; celcius = celcius - step ){
        fahrenheit = (celcius * (9/5)) + 32;

        printf("%3.0f %6.1f\n" , celcius , fahrenheit);

    }


    return 0;
}