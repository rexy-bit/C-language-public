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
     printf("\nVoici votre tableau trier par ordre croissant : ");
    aff(T,N);
    printf("\n");

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
     printf("\nVoici votre tableau trier par ordre decroissant : ");
    aff(T,N);
    printf("\n");

}

int inverse(){

    int inv,n;

    printf("\nVeillez entrez un entier n : ");
    scanf("%d", &n);
inv = 0;
    while(n>0){
        inv = inv*10 + n%10;
        n = n/10;
    }

    printf("\nL'inverse est : %d", inv);

    return 0;
}

int main(){
  inverse();

  

}