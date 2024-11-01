#include <stdio.h>

int main(){

    int n;
    float fact, i;


    printf("\nVeillez entrer un nombre entier positif : \n");

        scanf("%d", &n);

        if(n < 0){
            printf("\nveillez entrez un nombre entier positif ");

            return 0;
        }else if(n == 0){
            printf("\nLe factoriel de %d est : 1", n);

            return 0;
        }
   
    fact = 1;

    for(i = 1; i<= n; i++){
        fact = fact*i;
    }
    
    printf("\nLa factoriel de %d est : %.2f", n, fact);

    return 0;
}