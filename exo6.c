#include <stdio.h>
int main(){

    int i,n,S;

   

    S = 0;
    i = 1;
    do{
        printf("\nVeillez entrer un entier : ");
        scanf("%d", &n);
        S = S + n;
        i++;
    }while(i<=4);

    printf("\nThe final value of the sum is : %d", S);

    return 0;
}