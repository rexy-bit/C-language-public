#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main(){

    printf("\nBienvenu au systeme de caisse automatique de notre super marcher : ");

    int N;
    int i;

    printf("\nveillez entrez le nombre de produit que vous voulez passer : ");
    scanf("%d", &N);

    float pu[N];
    char nom[N][100];
    float np[N];
    float T[N];

    printf("\nSaisie des noms des proiduits et leurs prix unitaires : ");
    for(i=0;i<N;i++){
        printf("\nveillez entrez le nom du produit numero %d : ", i+1);
        scanf("%99s", nom[i]);
    do{
         printf("\nVeillez entrez le prix unitaires de votre produit : ");
        scanf("%f", &pu[i]);
    }while(pu[i]<=0);

    do{
        printf("\nveillez entrez la quantite du produit : ");
        scanf("%f", &np[i]);
    }while(np[i]<=0);

    T[i]=pu[i]*np[i];
      
    }

    printf("\nLa liste des produits est : ");
    printf("\nNom\t\tPrix unitaire\t\tCout totale");
    for(i=0;i<N;i++){
         printf("\n%s\t\t%.2f\t\t%.2f",nom[i],pu[i], T[i] );
    }

    float total = 0;
    float S = 0;

    for(i=0;i<N;i++){
        S += T[i];
    }
 total = S;

    if(S>1000){
        printf("\n\nVotre totale a payer est de %.2f dinars qui depasse 1000 da donc vous bainaifissier d'une reduction de 10 pourcent", total);
        total = S - (S*10)/100;
        printf("\n\nVotre total a payer donc est de : %.2f dinars", total);
    }else{
        printf("\nVotre total a payer est de %.2f", total);
    }

    return 0;
}