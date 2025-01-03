#include <stdio.h>
#include <math.h>
#include <stdbool.h>



void remp(int T[], int N){
    int i;

    for(i=0;i<N;i++){
        printf("\nVeillez remplir la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }
}

void aff(int T[], int N){
    int i;

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
}

void crois(int T[], int N){
    int i,j;

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(T[i]>T[j]){
            int temp = T[i];
            T[i]=T[j];
            T[j]=temp;
            }
        }
    }

    aff(T,N);

}

void dec(int T[], int N){
    int i,j;

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]<T[j]){
                int temp = T[i];
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
    printf("\nVeillez entrez la taille de votre tableau : ");
    scanf("%d", &N);
  }while(N<=0);

  int T[N];
  remp(T,N);
  aff(T,N);
  crois(T,N);
  dec(T,N);

  return 0;

}