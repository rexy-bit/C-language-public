#include <stdio.h>

int main(){

    int a,b,p,PGCD;

    printf("\nEntrez deux nombres a et b : ");
    scanf("%d %d", &a, &b);

    p = 0;
    while(p != 0){
        p = a - b;
        a = b;
        b = p;
        PGCD = b;
    }

    

    printf("\nPGCD(%d , %d) est : %d", a,b,PGCD);


    return 0;
}