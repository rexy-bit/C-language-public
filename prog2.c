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
int ajout(){

    int i,j,N;

    do{
        printf("\nveillez entrez le nombre d'etudiants dans un tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    float T[N];
    char nom[N][50];
   
   for(i=0;i<N;i++){
    printf("\nVeillez entrez le nom de l'etudiant numero %d : ", i+1);
    scanf("%s", &nom[i]);

       printf("\nVceillez entrez la note de %s : ", nom[i]);
       scanf("%f", &T[i]);
   }

   for(i=0;i<N;i++){
    printf("\n%s a eu : %.2f/20 ", nom[i], T[i]);
   }

   int p = 1;

   do{
    printf("\nVoulez vous rajouter un etudiant a la liste tapez 1 pour 'oui' ou '0' pour 'non' : ");
    scanf("%d", &p);

    if(p==1){
      N++;
      printf("\nVeillez entrez le nom de l'etudiant %d : ", N);
      scanf("%s", &nom[N-1]);

      printf("\nVeillez entrez la note de %s : ", nom[N-1]);
      scanf("%f", &T[N-1]);

      printf("\nVotre liste apres avoir rajouter l'etudiant %s est : \n", nom[N-1]);
      for(i=0;i<N;i++){
        printf("\n%s a eu %.2f/20", nom[i], T[i]);
      }
    }
   }while(p!=1);


   return 0;

}

int main(){
   ajout();
    return 0;
}