#include <stdio.h>

int main(){

    int n;
    float fact, S, i;


    do{
        printf("\nVeillez entrer un nombre entier : ");
        scanf("%d", &n);
    }while(n < 0);

    fact = 1;

    for(i = 1; i <= n;i++){
        fact = fact*i;
    }

    printf("\nLa factorielle de %d est : %.2f", n, fact);

    return 0;
    
}