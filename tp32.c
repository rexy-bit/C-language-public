#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int exo1(){

    int i,N;

    printf("\nEnter the size of the array : ");
    scanf("%d", &N);

    int tab[N];

    tab[0]=1;

    for(i=1;i<N;i++){
        tab[i]=tab[i-1]*2;
    }

    for(i=0;i<N;i++){
        printf(" %d | ", tab[i]);
    }
    return 0;
}

int exo2(){

    int i,N;

    printf("\nVeillez entrez la taille du tableau : ");
    scanf("%d", &N);

    int T[N];
     
     for(i=0;i<N;i++){
    printf("\nVeillez entrez la valeur de la case %d : ", i);
    scanf("%d", &T[i]);
     }

     for(i=0;i<N;i++){
        if(i%2!=0){
            printf(" %d | ", T[i]);
        }
     }
     return 0;
}

int exo3(){
    int i,N;

    do{
        printf("\nVEillez entrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);


    int T[N];
    int S =0;

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case  %d : ", i);
        scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        S += T[i];
    }
    printf("\n");
    printf("\nThe sum is : %d", S);


return 0;

}

int exo4(){

    int i,N;

    do{
        printf("\nVeillez entrez l ataille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];
    int max;

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
    }
    max = T[0];

    for(i=0;i<N;i++){
        if(max<T[i]){
            max = T[i];
        }
    }

    
    printf("\n\nThe maximum is : %d", max);

    return 0;
}


int exo5(){

    int i,N;

    do{
        printf("\nVeillez entrez l ataille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);


    int T[N];
     int p = 1;

     for(i=0;i<N;i++){

        printf("\nVeillez entrez la valeur de la case %d : ",i);
        scanf("%d", &T[i]);
     }
     
     printf("\n\nLe tableau est : ");
     for(i=0;i<N;i++){
        
        printf(" %d |", T[i]);
     }

     int m;

     printf("\n\nVeillez entrez un entier m a rechercher : ");
     scanf("%d", &m);

     for(i=0;i<N;i++){
        if(T[i]==m){
            p=1;
            break;
        }else{
            p=0;
        }
     }

     if(p==1){
        printf("\n\nL'entier %d existe dans le tableau", m);
     }else{
        printf("\nL'entier %d n'existe pas dans le tableau", m);
     }
     

     return 0;

}


int exo6(){

    int i,N,j,val;

    do{
        printf("\nVeillez entrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);
  
     int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la cse %d : ", i);
        scanf("%d", &T[i]);
    }

    printf("\nVoici les valeurs du tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\n\nEntrez la valeur que vous voulez supprimer du tableau : ");
    scanf("%d", &val);

    for(i=0;i<N;i++){
        if(T[i]==val){
            for(j=i;j<N-1;j++){
                T[j]=T[j+1];
            }
            N--;
            i--;
        }

        
    }

    printf("\n\nThe table after deleting '%d' : ", val);
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;

}

int exo7(){

    int i,j;
    double diff = 0;
    double Gdiff = 0;
    

    double T[10];

    for(i=0;i<10;i++){
        printf("\nVeillez entrez la valeur de la case %d : ",i);
        scanf("%lf", &T[i]);
    }


    printf("\nLe tableau : ");
    for(i=0;i<10;i++){
        printf(" %.2lf | ", T[i]);
    }

    for(i=0;i<10;i++){
        for(j=i + 1;j<10;j++){
            diff = T[j]-T[i];
        }

        if(diff<0){
            diff = -diff;
        }else if(diff>Gdiff){
            Gdiff = diff;
        }

         
    }

    printf("\n\nThe greatest difference is : %.2lf", Gdiff);

    return 0;
}
int main(){
   exo7();

   return 0;
}