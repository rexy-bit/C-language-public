#include <stdio.h>

int main(){
    int n;

    float j,i,S;

    do{
          printf("\nVeillez entrez un entier n impaire : ");
          scanf("%d", &n);
    }while(n%2 == 0);

    j = 1;
    S = 0;

    for(i = 1; i<= n; i++){

        S = S + pow(j, 2);
        j = j + 2;


    }

    printf("\nLa somme des premiers %d entiers est : %.2f", n, S);

    return 0;

    
   


}