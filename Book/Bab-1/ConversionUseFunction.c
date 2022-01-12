#include <stdio.h>

int conversion(int value1);

int main(){

    
    float celcius , fahrenheit;
    float lower , upper, step;

    upper = 1000;
    step = 100;

    
    for(celcius = 300 ; celcius >= 0 ; celcius = celcius - step ){
        fahrenheit = conversion(celcius);

        printf("%3.0f %6.1f\n" , celcius , fahrenheit);

    }



    return 0;
}

int conversion(int value1 ){
    return (value1 * (9/5) + 32);
}