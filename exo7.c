#include <stdio.h>

int main(){

    int i, n, fact;

    do{
        printf("\nPlease Enter a positive integer to begin the factoriel calculation : ");
        scanf("%d", &n);
    }while(n<0);

    if(i == 0){
        printf("\nThe fact of %d is always 1", n);
    }else{

        fact = 1;

        for(i=1;i<=n;i++){
            fact = fact*i;
        }

        printf("\nThe factoriel of %d is : %d", n, fact);
    }

    return 0;
}