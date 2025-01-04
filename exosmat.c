#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>


void exo1(){
    int i,j,N,M;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);

    do{
        printf("\nVeillez entrez la nombres de colomnes : ");
        scanf("%d", &M);
    }while(M<=0);
  int A[N][M];
    printf("\nRemplissage de la matrice : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("\nVeillez entrez la valeur de la lignes %d colomne %d : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nAffichage de la matrice : \n");
    for(i=0;i<N;i++){
       for(j=0;j<M;j++){
        printf("%d | ", A[i][j]);
       }
       printf("\n");
    }
}
int main(){
     exo1();
     return 0;
}