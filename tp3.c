#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int exo1(){

    int i,N;

    do{
        printf("\nVeillez entrez la taille du tbleau : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];

   T[0]=1;
    for(i=1;i<N;i++){
        T[i] = T[i-1]*2;

    }

    for(i=0;i<N;i++){
        printf("| %d ", T[i]);
    }

    return 0;

}


int exo2(){

    int i,N;

    do{
        printf("\nEntrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nEnterez une value pour la case %d : ", i);
        scanf("%d", &T[i]);
    }

    for(i=1;i<N;i+=2){
        printf("%d\t", T[i]);
    }

    return 0;
}


int exo3(){

    int i,N,S = 0;

    do{
        printf("\nEntrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

printf("\n");
    int T[N];

    for(i=0;i<N;i++){
        printf("\nEnter une valeur pour ma case %d : ", i);
        scanf("%d", &T[i]);
        S += T[i];
    }
    printf("\n");

    for(i=0;i<N;i++){
        printf("%d\t", T[i]);
    }
    printf("\n");

    printf("\nLa somme des valeurs des case est : %d", S);
    printf("\n");

    return 0;
}

int exo4(){

    int i,N,max;

    do{
        printf("\nEntrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);
printf("\n");
    int T[N];

    for(i=0;i<N;i++){
        printf("\nEntrez une valeur pour la case %d : ",i);
        scanf("%d", &T[i]);
    }

printf("\n\n");
    max = T[0];

    for(i=0;i<N;i++){
        if(max<T[i]){
            max = T[i];
        }
    }

    for(i=0;i<N;i++){
        printf("%d | ", T[i]);
    }

    printf("\n");
    
    printf("\nThe maximum is : %d", max);

    return 0;
}

int exo5(){

    int i,N,m;
    bool n = true;

        do{
        printf("\nEntrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];

        for(i=0;i<N;i++){
        printf("\nEntrez une valeur pour la case %d : ",i);
        scanf("%d", &T[i]);
    }

    printf("\n\n");

    printf("\nENter a value for m : ");
    scanf("%d", &m);
    printf("\n");

 i =0;

 while(m!=T[i]){
    if(m!=T[i]){
        n = false;
        
    }
    i++;
 }

    if(n){
        printf("\nIl existe %d dans le tableau : ", m);
    }else{
        printf("\nIl n'ya pas de %d dans le tableau", m);
    }
    return 0;
    
}



int main(){
    exo5();

    return 0;
}


