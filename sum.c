#include <stdio.h>

int main(){

    int i,n,S,E;

    printf("\nEnter a value for n : ");
    scanf("%d", &n);

    S = 1;
    E = 1;

    for(i = 2; i<=n;i++){

        S = S + i;
        E = E*S;
    }

    printf("E = %d", E);
}