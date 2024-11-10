#include <stdio.h>

int main(){

    long long c = 2426555645;

    int i = 1;

    while(i*2 < c){
        i *= 2;
    }

    printf("\nThe largest power of two less than c is : %d", i);

    return 0;
}