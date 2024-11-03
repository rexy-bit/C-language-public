#include <stdio.h>

int main(){

    int n;
    float i,S, fact;

    printf("\nEnter a value for n : ");
    scanf("%d", &n);

    fact = 1;

    for(i = 1; i<=n;i++){
        fact =fact*i;
    }

    printf("%d factoriel is : %.2f", n, fact);

    return 0;


    
}