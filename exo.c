#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int ex6(){

    int N,i;
    

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);
     
     int T[N];
    for(i=0;i<N;i++){
      printf("\nENter the value of the case %d : ", i);
      scanf("%d", &T[i]);

    }

    printf("\nVoici le tableau : ");
    for(i=0;i<N;i++){
        printf("%d | ", T[i]);
    }
     int j=0;
    for(i=0;i<N;i++){
        if(T[i]==0){
            for(j=i;j<N-1;j++){
              T[j]= T[j+1];
            }
            N--;
            i--;
        }
    }

    printf("\n\nThe table after the supression of the value is : ");

    for(j=0;j<N;j++){
        printf(" %d | ", T[i]);
    }
    return 0;
}

int ex7(){

    int i,N,j,x;

    do{
       printf("\nENter the size of the table : ");
       scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nEnter a value for the case %d : ", i);
        scanf("%d", &T[i]);
    }
       
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

     j = 1;
     i=0;

     while(j<N){
        if(T[j]<0 && T[i]>=0){
            x = T[j];
            T[j]=T[i];
            T[i]=x;
            i++;
        
        }

        j++;
     }

     printf("\nThe table after : ");
     for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
     }

     return 0;

}

int exo2(){

    int i,N,j,k;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    int T1[N];
    int T2[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    j=0;
    k=0;
    for(i=0;i<N;i++){
        if(T[i]%2==0){
            T1[j]=T[i];
            j++;
        }else{
          T2[k]=T[i];
          k++;
        }
    }


    printf("\nLe tableau apres la modifications est : ");

    printf("\n\nLe tableau des paires : ");
    for(i=0;i<j;i++){
        printf(" %d | ", T1[i]);
    }

    printf("\n\nLe tableau des impaires est : ");
    for(i=0;i<k;i++){

        printf(" %d | ", T2[i]);
    }

    return 0;
    
}

int exo5(){

    int i,N;

    do{
        printf("\nVeillez netrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
    }

    printf("\n\nVoici le tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    i=0;
    int x;

    while(i<=N){
        if(T[i]<T[i+1]){
           x =T[i];
           T[i]=T[i+1];
           T[i+1]=x;
           i++;
        }else{
            i++;
        }
    }

     printf("\n\nVoici le tableau apres la modification : ");
    for(i=0;i<N;i++){
       printf(" %d | ", T[i]);
    }

    return 0;
}

int exo5gpt(){
      int T[50], N;

    // Lecture de la taille du tableau
    printf("Entrez la taille du tableau (N ≤ 50) : ");
    scanf("%d", &N);

    // Lecture des éléments du tableau
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    // Détection de la première séquence croissante
    int debut = -1, fin = -1;
    for (int i = 0; i < N - 1; i++) {
        if (T[i] < T[i + 1]) {
            if (debut == -1) {
                debut = i; // Début de la séquence
            }
            fin = i + 1; // Fin de la séquence
        } else if (debut != -1) {
            break; // Fin de la première séquence croissante
        }
    }

    // Inversion de la séquence si elle existe
    if (debut != -1 && fin != -1) {
        while (debut < fin) {
            int temp = T[debut];
            T[debut] = T[fin];
            T[fin] = temp;
            debut++;
            fin--;
        }
    }

    // Affichage du tableau modifié
    printf("Tableau après inversion de la première séquence croissante :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}

int inve(){

    int i,N,j;

    do{
        printf("\nVeillez entrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
         printf("\nVeillez entrez la valeu de la case %d : ", i);
         scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    


    for(i=0;i<N;i++){
        if(T[i]==0){
            for(j=i;j<N;j++){
                T[j]=T[j+1];
            }
            N = N-1;
        }
    }

    printf("\nLe tableau apres avoir inverser ses valeurs est : ");
    printf("\n");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}
int main(){

    inve();

    return 0;
}