#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <assert.h>


void remp(int T[], int N){
   printf("\nRemplissage du tableau : ");
   int i;
   for(i=0;i<N;i++){
      printf("\nVeillez entrez la valeur de la case %d : ", i+1);
      scanf("%d", &T[i]);
   }
}

void aff(int T[], int N){
    int i;
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    
}

void tricr(int T[], int N){
    int i;
    printf("\nVoici votre tbalerua trier par orddre croissant : ");
    int j;
    for(i=0;i<N-1;i++){
      for(j=i+1;j<N;j++){
        if(T[i]>T[j]){
            int temp=T[i];
            T[i]=T[j];
            T[j]=temp;
        }
      }
    }

    aff(T,N);
}

void tridec(int T[], int N){
    int i,temp,j;

    printf("\nVoivi votre tableau decroissant : ");
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]<T[j]){
                temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
        }
    }
    aff(T,N);
}
int main(){
    int N;
    do{
        printf("\nVeillez entrez la nombre de cases : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    remp(T,N);
    printf("\nVoici votre tableau : ");
    aff(T,N);
    
    tricr(T,N);
    tridec(T,N);
}