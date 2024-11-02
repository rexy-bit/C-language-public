#include <stdio.h>
int main(){

    int n;
    float fact, i;

    printf("\nVeillez entrez un entier n : ");
    scanf("%d", &n);

    fact =  1;

    for(i = 1; i <= n; i++){
        fact = fact*i;
    }

    printf("Le factorial de %d est : %.2f", n, fact);

    return 0;
}