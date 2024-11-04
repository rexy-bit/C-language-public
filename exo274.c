#include <stdio.h>

int main(){

    int n;

    float S,i;

    printf("\nEnter a power n : ");
    scanf("%d", &n);

    S = 0;
    for(i = 0; i <= n; i++){
        S = S + pow(10, i);
    }

    printf("\nLa valeur finale de S est : %.2f", S);

    return 0;
}