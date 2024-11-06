#include <stdio.h>

int main(){

    const double c = 2426555645;
    double i = 1;

    while(i*2 < c){
        i *= 2;
    }

    printf("\nThe largest power of two less than %.2f is : %.2f", c, i);

    return 0;
}