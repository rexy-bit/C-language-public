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


int exoexam(){

    int i,j,inv;

    int N;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);
 int A[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nVeillez entrez la valeur ligne : %d colomne : %d : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nVoici votre matrice : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }


    int temp;

    j = N-1;
    for(i=0;i<N;i++){
        temp = A[i][i];
        A[i][i]=A[i][j];
        A[i][j]=temp;
        j--;
    }

    printf("\nL'inverse des 2 diagnales : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }

    int nbr=0;

     for(i=0;i<N;i++){
       nbr = nbr*10 + A[i][i];
     }

     printf("\nVoici le nombre qui compose la diagonale principlr : %d\n", nbr);

     int vnbr = nbr;
     inv = 0;
     while(vnbr>0){
        inv = inv*10 + vnbr%10;
        vnbr = vnbr/10;
     }

     printf("\nL'inverse de %d est %d", nbr, inv);

    return 0;

}

int inserer(){
    int i,N,j;

    do{
        printf("\nVeillez entrez le nombre de case : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre cvhere tableau  : \n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    int val,pos;
    printf("\nVeillez entrez la valuer que vous voulez inserer : ");
    scanf("%d", &val);

    printf("\nVeillez entrez la position dans laquelle vous voulez l'inszerer : ");
    scanf("%d", &pos);
    j=N;
    if(pos>=1&&pos<N){
        for(i=pos-1;i<N+1;i++){
            T[j]=T[j-1];
            j--;
        }
        T[pos-1]=val;
        N++;
    }else{
        printf("\nLa position que vous avez choisi ne figure pas dans le tableau :)");
    }

    printf("\nVoici votre tableau : ");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
   
  return 0;
}

int supprimer(){

    int i,N,j;
    int val;

    do{
        printf("\nVeillez entrez la y*taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
     printf("\nVeillez entrez la valeur de la case %d  : ", i+1);
     scanf("%d", &T[i]);
    }

    printf("\nVoici votre magnifique tableau : \n");
    for(i=0;i<N;i++){
          printf(" %d | ", T[i]);
    }


    printf("\nveillez entre la valeur a supprimer du tableau : ");
    scanf("%d", &val);
    bool p = 0;

    for(i=0;i<N;i++){
         if(T[i]==val){
            p = 1;
            for(j=i;j<N-1;j++){
                T[j]=T[j+1];
            }
            N--;
            i--;
         }
    }
 if(p==1){

 
    printf("\nVoici votre tableau apres la suppression de %d : ", val);
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
 }else{
    printf(" %d n'existe meme pas dans le tableau : ", val);
 }

    return 0;
}

void Tminmax(int T[], int N, int min,int max){
    int i;

    min = T[0];
    max = T[0];

    for(i=1;i<N;i++){
        if(T[i]<min){
            min = T[i];
        }else if(max>T[i]){
            max = T[i];
        }
    }

    printf("\nLe minimum est : %d", min);
        printf("\nLe maximum est : %d", max);

}

void ComposMatr(int a, int b,int N, float A[N][N]){
    int i,j;
    
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            A[i][j]= a;
        }
    }

    for(i=1;i<N;i++){
        for(j=0;j<i-1;j++){
          A[i][j]=b;
        }
    }

    for(i=0;i<N;i++){
        A[i][i]=(a+b)/2;
    }

}

void Trans(int N, float B[N][N],float A[N][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++) {
           B[j][i]=A[i][j];
        }
        
    }
}
int exoexam2(){

    int N,i,j;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre tableau : \n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    int min,max;
    Tminmax(T,N,min,max);
    printf("\nLe maximum est : %d,\nLe minimum est : %d", min,max);
    
    float A[N][N], B[N][N], C[N][N];

    return 0;
    
}
int main(){
     exoexam2();
     return 0;

     
}