#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,i;
    float Un;

    do{
        printf("\nEnter the number of terms n : ");
        scanf("%d", &n);
    }while(n < 0);

    Un = 1;

    for(i = 1;i <= n;i++){
        Un = 2*(sqrt(Un + 1)) - 1;
        
    }

    printf("\nThe value of Un for n = %d is : %.2f", n, Un);

    return 0;
}