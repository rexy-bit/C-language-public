#include <stdio.h>

int main(){

    int i,fact,n;

    do{
        printf("\nEnter a positive number n : ");
        scanf("%d", &n);
    }while(n<0);

    if(n == 0){

        printf("The factoriel of 0 is : 1");

    }else{
        fact = 1;

        for(i = 1; i<=n;i++){
            fact = fact*i;
        }

        printf("\nThe factoriel of %d is : %d", n, fact);
    }

    return 0;
}