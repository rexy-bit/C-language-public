#include <stdio.h>

int main(){

    int i,n,sum;

    sum = 0;
    i = 0;

    do{

        printf("\nEnter a positive integer : ");
        scanf("%d", &n);

        sum = sum + n;

        i++;
    }while(i<4);

    printf("\nThe sum is : %d", sum);

    return 0;
}