#include <stdio.h>
#include <math.h>

int main(){

    int n;
    float i, S;

    printf("\nVeillez entrer une valeur pour n : ");
    scanf("%d", &n);

    S = 0;

    for(i = 0; i <= n; i++){

        S = S + pow(10, i);
    }

    printf("\nLa valeurr de la somme est : %.2f", S);




    return 0;

}