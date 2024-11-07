#include <stdio.h>

int main(){
    int n,p,i;

    do{
        printf("\nEntrez un entier positif entre 1 est 10 : ");
            scanf("%d", &n);
    }while((n > 10) && (n < 0));

    p = 1;
    for(i = 0; i <=10; i++){
        p = n*i;
        printf("\n%d*%d = %d", n,i,p);
    }

    return 0;


    
}