#include <stdio.h>

int main(){

    int n;

    float i,S;

    printf("\nVeillez entrer une valeur pour n : ");
    scanf("%d", &n);

    S = 0;

    for(i = 0; i <= n; i++){
        S = S + pow(10, i);
    }

    printf("\nLa somme des %d puissances 10 est : %.2f",n, S);


    return 0;
}