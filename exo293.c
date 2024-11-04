#include <stdio.h>

int main(){

    int n;
    float i,S,j;

     do{
        printf("\nVeillez entrer un entier positif : ");
        scanf("%d", &n);
     }while(n<0);

     S = 0;
     j = 1;

     for(i = 1; i <= n;i++){
        S = S + pow(j, 2);
        j = j + 2;
     }
     
     printf("\nLa valeur finale de S est : %.2f", S);

     return 0;
}