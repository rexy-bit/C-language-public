#include <stdio.h>

int main(){
    int n;
    float i, fact;

    printf("\nEntrez une valeur pour n : ");
    scanf("%d", &n);

    if(n < 0){
        printf("\nOn ne peut pas afficher la factorial d'un nombre negatif");

        return 0;

    }else if(n == 0){
        fact = 1;
    }else if(n > 0){

        fact = 1;

        for(i = 1;i<=n;i++){
           fact = fact*i;
        }
    }

    printf("\nLa factoriel de %d est : %.2f", n, fact);

    


return 0;
    
}