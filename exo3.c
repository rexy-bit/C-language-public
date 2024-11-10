#include <stdio.h>
#include <math.h>


int main(){

    int i,n;
    float Un;


        printf("\nEnter a value for the last term of the sequence : ");
        scanf("%d", &n);


    Un = 1;
    for(i = 1; i <= n; i++){
        Un = 2*sqrt(Un + 1) - 1;
    }

    printf("\nThe value of the term %d is : %.2f", n, Un );

    return 0;

}