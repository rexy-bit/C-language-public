#include <stdio.h>

int main(){

    int inv,n,vn;

    do{
        printf("\nVeillez entrez un entier n : ");
        scanf("%d", &n);
    }while(n<0);
    vn = n;
    inv = 0;

    while(n!=0){

       inv = inv*10 + n%10;
       n = n/10;
    }

    printf("\nL'inverse de %d est : %d", n, inv);

    return 0;
}