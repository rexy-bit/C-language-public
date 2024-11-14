#include <stdio.h>
int main(){

    int n,i;
    long long fact;
    do{
    printf("\nEntrez un entier n : ");
    scanf("%d", &n);
    }while(n<0);


    if(n == 0){
        fact = 1;
    }else{
        fact = 1;
        for(i = 1;i<=n;i++){
            fact *= i;
        }
    }

    printf("\nLe factoriel de %d est : %lld", n, fact);

    return 0;
}