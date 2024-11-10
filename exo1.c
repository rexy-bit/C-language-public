#include <stdio.h>

int main(){

    int f;
    float c;

    f = 0;

    for(f = 0; f <= 300;f+= 10){

        c = (5.0/9.0)*(f - 32);

        printf("\n%d ferenheit in celsius is : %.2f", f, c);
    }


    return 0;
}
