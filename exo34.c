#include <stdio.h>

int main(){

    int i,n;
    float Un,U1,U0;
     do{

    printf("\nVeillez entrer l'indice du dernier terme de la suite Un : ");
    scanf("%d", &n);

     }while(n<2);

    U0 = 0;
    U1 = 1;
    
    for(i = 2;i<=n;i++){
        Un = U1 + U0;

        U0 = U1;
        U1 = Un;
         printf("\nLe dernier terme %d Un est : %.2f",i, Un);
    }

   

    return 0;
}