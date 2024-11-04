#include <stdio.h>

int main(){

    int n;
    float i,S;

    printf("\nVeillez entrer un nombre entier n : ");
    scanf("%d", &n);

    S = 0;
    for(i =1; i<= n;i++){
        S = S + 1/i;
    }

    printf("\nLa valeur finale de S est : %.2f", S);

    return 0;
}