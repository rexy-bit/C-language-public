#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <assert.h>


float somme(float T[], int N){

    int i;
    float S = T[1];

    for(i=1;i<N;i++){
        S = S + T[i];
    }

    return S;
}
float prod(float T[], int N){
    int i;
    float p = T[1];

    for(i=1;i<N;i++){
       p = p*T[i];
    }

    return p;

}

float moyenne(float T[], int N){

    int i;
    float moy;

    moy = somme(T, N)/N;

    return moy;
}
int main(){
    int N,i;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ",i+1);
        scanf("%f" ,&T[i]);
    }

    printf("\nLa somme est : %.2f", somme(T, N));
    printf("\nLe p^roduit est : %.2f", prod(T,N));
    printf("\nLa moyenne est : %.2f", moyenne(T,N));

    return 0;
}
