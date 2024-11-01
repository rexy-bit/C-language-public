#include <stdio.h>

int main(){

    int n, i, S, j;

    printf("\nEntrez un entier positif : ");
    scanf("%d", &n);

    if(n < 0){
        printf("\nEntrez un entier positif");
    }else if(n >= 0){

       j = 1;// j est pour les nombres impaires par contre i est pour le nombre de repetitions .
       S = 0;

       for(i = 1; i<= n; i++){
         S = S + pow(j, 2);
         j = j + 2;
       }

       printf("\nLa somme des nombre impaires premiers est : %d", S);
    }

    return 0;
}