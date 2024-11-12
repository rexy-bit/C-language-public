#include <stdio.h>

int main(){

    int n,S;

    printf("\nVeillez entrer un entier n : ");
    scanf("%d", &n);

    S = 0;

    while(n != 0){

        S = S + n;
        printf("\nLa somme est : %d", S);

        printf("\nVeillez entrer un entier n : ");
        scanf("%d", &n);
    }

    return 0;
}