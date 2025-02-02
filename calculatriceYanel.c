#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(){

    int N;
    int M;



    do{
        printf("\nveillez entrez le nombre de lignes de votre matrice : ");
        scanf("%d", &N);
    }while(N<=0);
    
    do{
        printf("\nVeillez entrez le nombre de colomnes de votre matrice : ");
        scanf("%d", &M);

    }while(M<=0);

    int A[N][M];
    int i,j;

    printf("\nRemplissage de votre matrice : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("\nVeillez entrez la valeur de la case [%de , %d] : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nVoici votre matrice : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }

    return 0;

}