#include <stdio.h>

int main(){

    int inv,n,R,vn;

    do{
        printf("\nEntrez un entier positif n : ");
        scanf("%d", &n);
    }while(n<0);

    vn = n;
    inv = 0;

    while(n!=0){
        R = n%10;
        inv = inv*10 + R;
        n = n/10;

    }

    printf("\nL'inverse de %d est : %d",vn, inv);
     return 0;
}