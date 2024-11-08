#include <stdio.h>

int main(){

    const double c = 2436555645;
    double i;

    i = 1;

    while(i*2<c){
        i *= 2;
    };

    printf("\nThe largest power of two less than %.2lf is : %.1lf", c, i);

    return 0;
}