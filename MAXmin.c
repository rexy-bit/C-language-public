#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>


int maximum(int T[], int N){
    int max = T[0];
    int i;

    for(i=1;i<N;i++){
        if(max<T[i]){
            max = T[i];
        }
    }

    return max;
}

int minimum(int T[], int N){
    int min = T[0];

    for(int i=1;i<N;i++){
        if(min > T[i]){
            min = T[i];
        }
    }

    return min;
}

void inv(int T[], int N, int V[]){

    int i,j;

    printf("\nL'inverse de votre tbaleau est : ");
    j = N;
    i = 0;

    for(i=0;i<N;i++){
        V[j-1]=T[i];
        j--;
    }

    for(i=0;i<N;i++){
        printf(" %d | ", V[i]);
    }
}
int main(){
    
    int N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);
int T[N], V[N];
int i;
   for( i=0;i<N;i++){
      printf("\nVeillez entrez la valeur de la case %d : ", i+1);
      scanf("%d", &T[i]);
    }

    printf("\nVoici votre merveille tableau mon chere : ");
    for(i=0;i<N;i++){
         printf(" %d | ", T[i]);
    }

    printf("\nLe minimum de votre tbaleau est : %d", minimum(T,N));
    printf("\nLe maximum de votre tbaleau est : %d", maximum(T,N));
    inv(T,N,V);

    return 0;
    
}