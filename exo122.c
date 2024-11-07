#include <stdio.h>

int main(){

    const double c = 2426555645;
    double i = 1;

    while(i*2 < c){
        i *= 2;
    }

    printf("\nThe largest power of 2 less than %.1lf is : %.1lf", c, i );

    return 0;
}