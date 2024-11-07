#include <stdio.h>

int main(){

    int i,n;

    float Un;

    do{

        printf("\nEnter a number n as the number of terms : ");
        scanf("%d", &n);
            }while(n<0);

     Un = 0;

     for(i = 1;i<=n;i++){
         Un = 2*sqrt(Un + 1) - 1;
     }

     printf("\nThe Last turm of the sequence un for n = %d is : %.2f", n, Un);

     return 0;


}