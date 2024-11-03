#include <stdio.h>

int main(){

    int n;
    float S,i;

    printf("\nEnter a value for n : ");
    scanf("%d", &n);

    S = 0;
    for(i = 0;i <= n; i++){

        S = S + pow(10, i);
    }

    printf("\nThe final value of n powers of 10 is : %.2f", S);

    return 0;
}