#include <stdio.h>
int main(){

    int n, d, i;

    do{
        printf("\nEntrez un entier non null : ");
        scanf("%d", &n);
    }while(n == 0);

    d =n/2;

    printf("\nLes diviseurs de %d sont : ", n);

    for(i = 1; i <= d;i++){
        if(d%i == 0){
            printf("\n%d", i);
        }
    }

    printf("\n%d", n);

    return 0;
}