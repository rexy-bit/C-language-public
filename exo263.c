#include <stdio.h>

int main(){
    int n;
    float S,i;

    do{
        printf("\nEnter an integer number n : ");
        scanf("%d", &n);
    }while(n < 0);

    S = 0;
    for(i = 1; i <= n; i++){
        S = S + 1/i;
    }

    printf("\nThe value of the sum is : %.2f", S);


    return 0;

}