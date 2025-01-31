#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void afficher(int N, char np[N][100], float pu[N], float pt[N],float quantite[N], float total){
    printf("\n\nVoici votre facture demande : ");
    printf("\n------------------------------------------------------");
    printf("\nNumeo\tNom Produit\tQuantite\tPrix unitaire\tPrix total");
    int i;
    for(i=0;i<N;i++){
        printf("\n%d\t%s\t%.1f\t%.2f\t%.2f", i+1,np[i],quantite[i], pu[i],pt[i]);
    }
    printf("\n\nVotre total a payer est de : %.2f", total);
    printf("\n\n--------------------------------------------------------");

    printf("\n\nMerci pour votre commande :)");
}

int main(){

    int N;
    float Total = 0;
    do{
        printf("\nVeillez entrez le nombre d'articles que vous avez : ");
        scanf("%d", &N);
    }while(N<=0);

    char nomProduit[N][100];
    float prixUnitaire[N];
    float quantiteProduit[N];
    float prixTotalProduit[N];

    int i;

    printf("\nRemplissage des informations necessaires : ");
    
    for(i=0;i<N;i++){
        printf("\nVeilelz entrez le nom du produit numero %d : ", i+1);
        scanf("%99s", nomProduit[i]);

        do{
            printf("\nVeillez entrez le prix unitaire du produit '%s' : ", nomProduit[i]);
            scanf("%f", &prixUnitaire[i]);
        }while(prixUnitaire[i]<=0);

        do{
            printf("\nVeillez entrez la quantite de %s que vous avez : ", nomProduit[i]);
            scanf("%f", &quantiteProduit[i]);
        }while(quantiteProduit[i]<=0);
       
       prixTotalProduit[i]=prixUnitaire[i]*quantiteProduit[i];

       printf("\nLe prix totale du produit %s est : %.2f da",nomProduit[i], prixTotalProduit[i]);
       Total = Total + prixTotalProduit[i];

}

   if(Total > 1000){
     printf("\nVotre facture depasse les 1000da vous benefissiez d'une remise de 10 pourcent sur vos achats");
     printf("\nLe total a payer avant la remise est : %.2f", Total);
     Total = Total - (Total * 10)/100;
     printf("\nLe total apres la reduction est : %.2f", Total);
   }else{
     printf("\nLe total a payer est : de %.2f", Total);
   }

    int choix = 0;
  do{
printf("\nVoulez vous afficher la facture : Tapez 1 pour oui ou 0 pour Non : ");
    scanf("%d", &choix);
  }while(choix < 0);

  if(choix == 1){
     afficher(N,nomProduit,prixUnitaire,prixTotalProduit, quantiteProduit,Total);
  }else{
    printf("\nMerci pour votre commande :) ");
  }
    
    return 0;
  
}