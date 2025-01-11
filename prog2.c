#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>

void prod(){

    int i,j,N;

    do{
        printf("\nVeillez entrez le nombres d'etudiants : ");
        scanf("%d",&N);
    }while(N<=0);

    float T[N];
    char nom[N][50];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez le nom de votre etudiant %d : ", i+1);
        scanf("%s", nom[i]);
        printf("\nVeillez entrez la note de %s : ", nom[i]);
        scanf("%f", &T[i]);
    }

    for(i=0;i<N;i++){
        printf("\n%s a eu %.2f/20 ", nom[i], T[i]);
    }

    int cpt=0;
    for(i=0;i<N;i++){
        if(T[i]>=10){
            printf("%s a eu %.2f/20 il a eu la moyenne ", nom[i], T[i]);
            cpt++;
        }
    }
    printf("\nLe nombre d'etudiant a ayant eu la moyenne est : %d", cpt);

    float moy = 0;
    float S = 0;

    for(i=0;i<N;i++){
        S += T[i];
    }

    moy = S/N;
    printf("\n\nLa moyenne de la clase est %.2f", moy);

}

int main(){
   prod();
    return 0;
}