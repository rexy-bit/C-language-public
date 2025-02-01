#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void recherche(int N,char Titre[N][100], char auteur[N][100], int code[N]){
    char nomRecherche[100];
    printf("\nVeillz Entrez le titre du livre que vous voulez rechercher : ");
  fgets(nomRecherche, 100,stdin);
  bool trouve = 0;
  int i = 0 ;
  while(i<N && trouve == 0){
    if(strcmp(nomRecherche,Titre[i])==0){
        trouve = 1;
    }
    i++;
  }
 if(trouve == 1){
printf("\nLe livre Titrè '%s' exite dans la biblioteque", nomRecherche);
 }else{
    printf("\nLe livre Titrè '%s' n'exite pas dans la biblioteque", nomRecherche);
 }

}

void contenu(int N,char Titre[N][100], char auteur[N][100], int code[N]){
      
      printf("\nVoici votre bibliotheque : ");
      
      int i;
       printf("\nTitre\t\t\tAuteur\t\t\tCode");
      for(i=0;i<N;i++){
          for(i=0;i<N;i++){
        printf("\n");
        printf("%s\t\t\t%s\t\t\t%d", Titre[i], auteur[i], code[i]);
    }
      }
}

int main(){

    int nbrLivres;
    
do{

    printf("\nVeillez Entrez le nombre de livres que vous voulez stocker : ");
    scanf("%d", &nbrLivres);

}while(nbrLivres<=0);
 getchar();
    char livreTitre[nbrLivres][100];
    char auteurLivre[nbrLivres][100];
    int codeLivre[nbrLivres];

    int i;

    for(i=0;i<nbrLivres;i++ ){
        printf("\nVeillez Entrez le titre du livre numero %d : ", i+1);
        fgets(livreTitre[i], 100, stdin);

        printf("\nVeillez Entrez le nom de l'auteur de %s : ", livreTitre[i]);
        fgets(auteurLivre[i],100,stdin);

        printf("\nveillez ENtrez le code du livre '%s' : ", livreTitre[i]);
        scanf("%d", &codeLivre[i]);
        getchar();
    }

    printf("\nVoici votre bibliotheque : ");
    printf("\nTitre\t\t\tAuteur\t\t\tCode");
   
    for(i=0;i<nbrLivres;i++){
        printf("\n");
        printf("%s\t\t\t%s\t\t\t%d", livreTitre[i], auteurLivre[i], codeLivre[i]);
    }



  int choix;
  int continuer;

  do{
  printf("\nVoici le menu de la bibliotheque : ");
    printf("\n-----------------------------------------------------");
    printf("\n1-Rechercher un livre par son titre.");
    printf("\n2-Ajouter un livre.");
    printf("\n3-Supprimer un livre.");
    printf("\n4-Afficher le contenu de la bibliotheque : ");
    printf("\n5-Quitter.");
    
    scanf("%d", &choix);
    getchar();

    if(choix == 1){
        recherche(nbrLivres,livreTitre,auteurLivre,codeLivre);
    }else if(choix == 4){
        contenu(nbrLivres,livreTitre,auteurLivre,codeLivre);
    }

    printf("\nVoulez vous continuer ? tapez 1 pour oui et 0 pour non : ");
    scanf("%d", &continuer);
    getchar();


    
  }while(continuer!=0);
  

    
     

      
    

    
    
        
    return 0;


}