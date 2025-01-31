#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <time.h>


void affichage(int nbrLivres, char titre[nbrLivres][100], char auteur[nbrLivres][100], int annee[nbrLivres]){
     printf("\nVoici Votre bibliotheque : ");
     int i;
        printf("\n\nTitre\tAuteur\tAnnee de publication");
    for(i=0;i<nbrLivres;i++){
        printf("\n%s\t%s\t%d", titre[i], auteur[i], annee[i]);
    }
}
int main(){

    int nbrLivres;
    printf("\nBienvenu dans votre bibliotheque : ");
    printf("\nVeillez Entrez le nombre de livres que vous voulez stocker : ");

    scanf("%d", &nbrLivres);
    getchar();

    char livreTitre[nbrLivres][100];
    char auteurLivre[nbrLivres][100];

    int anneePublication[nbrLivres];

    printf("\nRemplissage de votre bibliotheque : ");
    int i;

    for(i=0;i<nbrLivres;i++){
     printf("\nVeillez entrez le titre du livre Numero %d : " , i+1);
     fgets(livreTitre[i], 100, stdin);

     printf("\nVeillez entrez le nom de l'auteur du %s : ", livreTitre[i]);
       fgets(auteurLivre[i], 100, stdin);

     do{
        printf("\nVeillez Entrez l'annee de publication du %s : ", livreTitre[i]);
        scanf("%d", &anneePublication[i]);
        getchar();
     }while(anneePublication[i]<=0);
    }

    printf("\nVoici les livres de votre bibliotheque : ");
    printf("\n--------------------------------------------------------------");
    printf("\n\nTitre\t\t\tAuteur\t\t\tAnnee de publication");
    for(i=0;i<nbrLivres;i++){
        printf("\n");
        printf("%s\t\t\t%s\t\t\t%d", livreTitre[i], auteurLivre[i], anneePublication[i]);
    }

    int verification = 0;
    do{
           printf("\nVoulez Vous acceder au menu administarteur pour effectuer des modifiction Tapez  pour 'oui' ou 0 pour 'Non' : ");
    scanf("%d", &verification);

    }while(verification < 0);
     getchar();

    if(verification == 1){
         affichage(nbrLivres, livreTitre, auteurLivre, anneePublication);
    }else{
        printf("\nMerci pour votre visite");
    }

    
return 0;

    
}