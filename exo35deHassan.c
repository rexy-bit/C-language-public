#include <stdio.h>

int main(){

    int n,i,tir,j,k,p;

    printf("x*y  |");
    for(n = 1;n<=10; n++){
        
        printf(" %d ", n);
        
        
    }
    printf("\n");

    for(tir = 1;tir<=10;tir++){

        printf(" ___ ");
    }

        printf("\n");
        for(i = 1;i<=10;i++){
            printf("%d   | ", i);
            for(j = 1;j<=10;j++ ){
               p = i*j;
               printf(" %d ",p);
            }

            printf("\n");
        }
        
    


    return 0;
}