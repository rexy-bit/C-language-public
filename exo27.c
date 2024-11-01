#include <stdio.h>
#include <math.h>

int main(){

    int n;
    float i,S;

    printf("\nChoose an number n : ");
    scanf("%d", &n);

    S = 0;
    for(i = 0; i <= n; i++){
        S = S + pow(10, i);
    }

    printf("\nLa somme des puissances de 10 de 0 a %d est : %.2f", n, S);

    return 0;
}