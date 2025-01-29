#include <stdio.h>

int main(){

    int S,n,vn;

    do{

        printf("\nVeillez ebtrez un entier un entier n : ");
        scanf("%d", &n);
    }while(n<0);
    
    S = 0;
    vn = n;

    while(n!=0){

        S = S + n%10;
        n = n/10;
    }

    printf("\nLa somme des entiers qui composent %d est : %d ", vn, S);

    return 0;
}