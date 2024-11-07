#include <stdio.h>

int main(){

    int n,i,S;

    do{
        printf("\nEnter a positive integer : ");
        scanf("%d", &n);
    }while(n<0);

    S = 0;

    for(i = 1;i <= n;i++){
          S = S + pow(i, 2);
    }

    printf("\nLa somme est : %d", S);

    return 0;

}