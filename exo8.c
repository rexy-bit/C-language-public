#include <stdio.h>
#include <math.h>


int main(){
    int i,n,sum;

    printf("\nEnter a value for n : ");
    scanf("%d", &n);

    sum = 0;

    for(i = 0; i<=n;i++){
       sum = sum + pow(i, 3);
    }


    printf("\nThe sum is : %d", sum);

    return 0;
}
