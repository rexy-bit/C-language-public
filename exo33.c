#include <stdio.h>

int main(){

    int i,n;
    float Un;

    printf("\nEnrez l'indice du dernier terme de la suite Un : ");
    scanf("%d", &n);

    Un = 0;
    for(i = 1;i<=n;i++){
        Un = 4*Un + 10;
            }

          printf("\nLe dernier terme de la suite Un est : %.2f", Un);

          return 0;
}