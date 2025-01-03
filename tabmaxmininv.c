#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <stdbool.h>

int minimum(int T[], int N){
    int min = T[0];
    int i;
    for(i=1;i<N;i++){
       if(T[i]<min){
        min = T[i];
       }

      
    }
     return min;
}

int maximum(int T[], int N){
    int i;
    int max=T[0];

    for(i=1;i<N;i++){
        if(max<T[i]){
            max = T[i];
        }

     
    }
       return max;

}


void inv(int T[], int N, int V[]){
      int i;
     
   int j = N;
   for(i=0;i<N;i++){
    V[j-1]=T[i];
    j--;
   }

   printf("\nVotre tableau inverser est : \n");
   for(i=0;i<N;i++){
    printf(" %d | ", V[i]);
   }


}
int main(){

int i,N;

do{
    printf("\nVeillez entrez la taillede votre tableau :  ");
    scanf("%d", &N);
}while(N<=0);

int T[N], V[N];

for(i=0;i<N;i++){
    printf("\nVeillez entrez la valeur de la case %d : ", i+1);
    scanf("%d", &T[i]);
}

printf("\nVoici votre tableau : ");
for(i=0;i<N;i++){
    printf(" %d | ", T[i]);
}

  printf("\nLa valuer minimale de votre tableau est : %d", minimum(T,N));
  printf("\nLa valeur maximale de votre tableau est : %d", maximum(T,N));
  inv(T,N,V);

  return 0;
}