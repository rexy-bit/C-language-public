#include <stdio.h>

int main(){

    int f;
    float c;

    f = 0;

    for(f = 0;f<= 300;f += 10){
         
        c = (5/9)*(f - 32);
        printf("\nThe temperature %d ferenheit in celsius is : %.2f celsius",f, c);
    }

    

    return 0;

}