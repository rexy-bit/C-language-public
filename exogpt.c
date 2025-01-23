#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void tab(float T[], int N){
    int i,j;
    float temp;
    for(i=0;i<N-1;i++){
        for(j=i;j<N;j++){
         if(T[i]>T[j]){
            temp = T[i];
            T[i]=T[j];
            T[j]= temp;
         }
        }
    }

    printf("\nVoici les notes trier par ordre croissant : \n");
    for(i=0;i<N;i++){
        printf(" %.2f | ", T[i]);
    }

    
}

void cherche(float T[], int N, float val){
     int i;
     for(i=0;i<N;i++){
        if(T[i]==val){
            printf("\nL'etudiant numero %d a la note : %.2f", i+1,val);
        }
     }
}
void exo1(){

    int N;

    do{
        printf("\nVeillez entrez le nombre des etudiant dans la classe : ");
        scanf("%d", &N);
    }while(N<=0 && N > 50);

    float T[N];

    int i;
    for(i=0;i<N;i++){
        do{

        
        printf("\nveillez entrez la note de l'etudiant %d : ", i+1);
        
        }while(T[i]<0 || T[i]>20);
        scanf("%f", &T[i]);
    }

    printf("\nVoici les notes des etudiant : ");
    for(i=0;i<N;i++){
        printf("\nLa note de l'etudiant %d est : %.2f", i+1,T[i]);
    }

    float min,max;
    min =T[0], max = T[0];

    for(i=0;i<N;i++){
        if(T[i]<min){
            min = T[i];
        }else if(max<T[i]){
            max = T[i];
        }
    }
    printf("\nLa note la plus elever est : %.2f", max);
    printf("\nLa note la plus basse est : %d", min);



    float moy;
    int S = 0;
    for(i=0;i<N;i++){
       S = S + T[i];
    }
    moy = S/N;
    printf("\nLa moyenne de la classe est : %.2f", moy);

    tab(T,N);

    float val;

    printf("\nVeillez entrez une note a revhercher : ");
    scanf("%f", &val);

    cherche(T,N,val);
    

    
}

void exo2(){

    int N,M;

    do{
        printf("\nVeillez entrez le nombre de lignes de la matrice : ");
        scanf("%d", &N);
    }while(N<=0);

    do{
        printf("\nVeillez entrez le nombre de colomnes de la matrice A : ");
        scanf("%d", &M);
    
    } while(M<=0);

    int A[N][M];
    int B[N][M];
    int i,j;

    printf("\nRemplissage de la martrice A : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("\nVeillez entrez la valeur [%d , %d] : ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nAffichage de la metrice A : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf(" %d |", A[i][j]);
        }
        printf("\n");
    }

    printf("\nRemplissage de la matrice B : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("\nVeillez entrez ola valeur de la case [%d , %d] : ", i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nAffichage de la matrice B : \n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf(" %d | ", B[i][j]);
        }
        printf("\n");
    }

    int C[N][M];

    printf("\nLa somme des deux matrice est : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            C[i][j]=A[i][j] + B[i][j];
            printf(" %d | ", C[i][j]);
        }
        printf("\n");
    }

    printf("\nLa transpose de A est : \n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf(" %d | ", A[j][i]);
        }
        printf("\n");
    }






}
int main(){
 exo2();
return 0;
}