#include <stdio.h>

int main(){

    int i,n;
    float Un,U0,U1;

    do{
        printf("\nEntrez une valeur n pour definir le nombre de terme pour n>0 et n != 0 : ");
        scanf("%d", &n);
    }while(n<0);

    U0 = 2;
    U1 = 3;

    for(i = 3;i<=n;i++){
        Un = (2/3)*U1 - (1/4)*U0;
        U0 = U1;
        U1 = Un;
    }

    switch(n){
        case 0 :
          Un = 2;
          break;

        case 1 : 
          Un = 3;
          break;

          
    }

    printf("\nThe final value of Un for n = %d is : %.2f", n, Un);

    return 0;

}