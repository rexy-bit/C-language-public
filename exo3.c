#include <stdio.h>
#include <math.h>
int main(){

    int n, i;
    float Un;

    printf("\nEntrez le dernier terme de la suite : ");
    scanf("%d", &n);

    Un = 1;

    for(i = 1;i <= n;i++){
        Un = 2*sqrt(Un + 1) - 1;
    }

    printf("\nLe dernier terme de la suite Un est / %.2f", Un);

    return 0;
}