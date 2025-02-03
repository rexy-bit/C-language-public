#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

void liste(int N, char nom[N][100], float noteAnalyse[N], float noteAsd[N], float noteAlgebre[N]){
      
      printf("\n-----------------------------------------------------------");
      printf("\nVoici la liste des etudiants.");
      printf("\n");
      int i;
      for(i=0;i<N;i++){
        printf("\nEtudiant %d : ", i+1);
        printf("\nNom : %s", nom[i]);
        printf("\nNote Analyse : %.2f/20", noteAnalyse[i]);
        printf("\nNote Asd : %.2f/20", noteAsd[i]);
        printf("\nNote Algebre : %.2f/20", noteAlgebre[i]);
        printf("\n\n");

      }
      printf("\n-----------------------------------------------------------");

}

void Moyenne(int N, char nom[N][100], float moyenne[N]){
    char nomRecherche[100];
     printf("\n-----------------------------------------------------------");
       printf("\nAffichage moyenne.");
       int i;
      int pi;
       bool trouve = 0;
    do{
        printf("\nVeillez entrez le nom de l'etudiant que vous voulez afficher sa moyenne : ");
        fgets(nomRecherche, 100 ,stdin);
        nomRecherche[strcspn(nomRecherche, "\n")] = 0;
       

        i = 0;
        while(i<N && trouve == 0){
            if(strcmp(nom[i], nomRecherche) == 0){
                trouve = 1;
                pi = i;
            }else{
                i++;
            }
            
        }

    }while(trouve == 0);

    if(trouve == 1){
        printf("\nLa moyenne de l'etudiant %s est : %.2f/20 ", nom[pi], moyenne[pi]);
    }else{
        printf("\nLe nom %s n'a pas etait trouver.", nomRecherche);
    }
printf("\n-----------------------------------------------------------");
}

void classeMoyenne(int N, float moyenne[N]){
    float moyClass = 0;
printf("\n-----------------------------------------------------------");
printf("\nAffichage de la moyenne de la classe.");
    int i;
    for(i=0;i<N;i++){
        moyClass += moyenne[i];
    }

    printf("\nLa moyenne de la classe est : %.2f/20", moyClass);
    printf("\n-----------------------------------------------------------");
}

void plusGrande(int N, char nom[N][100], float moyenne[N]){
    printf("\n-----------------------------------------------------------");
    printf("\nAffichage de la plus grande moyenne de la classe.");
    float max = moyenne[0];
    int pi = 0;
    int i;
    for(i=1;i<N;i++){
         if(max<moyenne[i]){
            max = moyenne[i];
            pi = i;
         }
    }

    printf("\nL'etudiant avec la plus haute moyenne est : %s\nLa moyenne de %s est : %.2f/20", nom[pi], nom[pi], moyenne[pi]);
  printf("\n-----------------------------------------------------------");
}

void Ajouter(int *N, char nom[*N][100], float noteAnalyse[*N], float noteAsd[*N], float noteAlgebre[*N], float moyenne[*N]){

       char newNom[100];
       float newAnalyse,newAlgebre,newAsd;
       printf("\n-----------------------------------------------------------");
       printf("\nAjout d'un etudiant.");
       printf("\nVeillez entrez le nom du nouvel etudiant.");
       fgets(newNom, 100, stdin);
       newNom[strcspn(newNom, "\n")]= 0;
       printf("\nveillez entrez la note d'analyse de %s : ", newNom);
       scanf("%f", &newAnalyse);
       getchar();

        printf("\nveillez entrez la note d'Asd de %s : ", newNom);
       scanf("%f", &newAsd);
       getchar();

        printf("\nveillez entrez la note d'Algebre de %s : ", newNom);
       scanf("%f", &newAlgebre);
       getchar();

       (*N)++;
       strcpy(nom[*N - 1], newNom);
       noteAnalyse[*N - 1] = newAnalyse;
       noteAsd[*N - 1] = newAsd;
       noteAlgebre[*N - 1] = newAlgebre;
       moyenne[*N - 1] = (newAnalyse + newAsd + newAlgebre)/3;

       printf("\nLe nouvel etudiant %s a ete ajouter avec succes !", newNom);

        printf("\n-----------------------------------------------------------");

}

void Supprimer(int *N, char nom[*N][100], float noteAnalyse[*N], float noteAsd[*N], float noteAlgebre[*N], float moyenne[*N]){
    char nomSupprimer[100];
     printf("\n-----------------------------------------------------------");
    
    int i;
    bool trouve = 0;
    
    do{
        printf("\nVeillez entrez le nom de l'etudiant que vous voulez supprimer : ");
    fgets(nomSupprimer, 100, stdin);
    nomSupprimer[strcspn(nomSupprimer, "\n")] = 0;
        i = 0;
        while(i<*N && trouve == 0){
            if(strcmp(nomSupprimer, nom[i])==0){
                trouve = 1;
            
            }else{
                i++;
            }
        }

    }while(trouve == 0);

 int j;
    for(i=0;i<*N;i++){
        if(strcmp(nom[i], nomSupprimer) == 0){
          
          for(j=i;j<*N - 1;j++){
            strcpy(nom[j], nom[j+1]);
            noteAnalyse[j] = noteAnalyse[j+1];
            noteAsd[j] = noteAsd[j+1];
            noteAlgebre[j] = noteAlgebre[j+1];
            moyenne[j] = moyenne[j+1];

          }
          (*N)--;
        }
    }

    printf("\nL'etudiant %s a bien etait supprimer.", nomSupprimer);

    printf("\n-----------------------------------------------------------");

}
int main(){

    int nbrEtudiant;

    do{
        printf("\nVeillez entrez le nombres d'etudiants : ");
        scanf("%d", &nbrEtudiant);
    }while(nbrEtudiant <= 0);
    getchar();

    char nomEtudiant[nbrEtudiant][100];
    float noteAnalyse[nbrEtudiant];
    float noteAsd[nbrEtudiant];
    float noteAlgebre[nbrEtudiant];
    float moyenne[nbrEtudiant];
    printf("\n\nRemplissage de la liste d'etudiants : ");
    float S = 0;
    
    int i;
    for(i=0;i<nbrEtudiant;i++){
        S = 0;
        printf("\nVeillez entrez le nom de letudiant numero %d : ", i+1);
        fgets(nomEtudiant[i], 100, stdin);
        nomEtudiant[i][strcspn(nomEtudiant[i], "\n")] = 0;

        printf("\nVeillez entrez la note d'analyse de l'eleve %s : ", nomEtudiant[i]);
        scanf("%f", &noteAnalyse[i]);
        getchar();

        printf("\nveillez entrez le note d'asd de l'eleve %s : ", nomEtudiant[i]);
        scanf("%f", &noteAsd[i]);
        getchar();

        printf("\nveillez entrez la note d'algebre de l'etudiant %s : ", nomEtudiant[i]);
        scanf("%f", &noteAlgebre[i]);
        getchar();

        S = noteAnalyse[i] + noteAsd[i] + noteAlgebre[i];
        moyenne[i] = S/3;
        getchar();

    }

    printf("\nVoici la liste des etudiant : ");

    liste(nbrEtudiant, nomEtudiant, noteAnalyse, noteAsd, noteAlgebre);

    int choix;
    int poursuivre;

    do{
        printf("\nVoici le menu de votre programme : ");
        printf("\n1)-Afficher la liste des etudiants.");
        printf("\n2)-Afficher la moyenne d'un etudiant.");
        printf("\n3)-Afficher la myenne de la classe.");
        printf("\n4)-Afficher l'etudiant avec la meilleur moyenne.");
        printf("\n5)-Ajouter un etudiant.");
        printf("\n6)-Supprimer un etudiant.");
        printf("\n7)-Quitter.");
        do{

        printf("\nVeillez entrez le numero de l'operation que vous voulez effectuer.");
        scanf("%d", &choix);

        }while(choix < 1 || choix > 7);
        getchar();

        if(choix == 1){
             liste(nbrEtudiant, nomEtudiant,noteAlgebre, noteAnalyse, noteAlgebre);
        }else if(choix == 2){
           Moyenne(nbrEtudiant, nomEtudiant, moyenne);
        }else if(choix == 3){
            classeMoyenne(nbrEtudiant,  moyenne);
        }else if(choix == 4){
            plusGrande(nbrEtudiant, nomEtudiant, moyenne);
        }else if(choix == 5){
            Ajouter(&nbrEtudiant, nomEtudiant,noteAlgebre, noteAnalyse, noteAlgebre, moyenne);

        }else if(choix == 6){
            Supprimer(&nbrEtudiant, nomEtudiant,noteAlgebre, noteAnalyse, noteAlgebre, moyenne);
        }

        do{
            printf("\nVoulez vous poursuivre ? Tapez 1 pour 'oui' ou 0 pour 'non' : ");
            scanf("%d", &poursuivre);
        }while(poursuivre < 0);
        getchar();

    }while(choix != 7 && poursuivre != 0);

    printf("\nMerci et bonne journee.");

 printf("\n-----------------------------------------------------------");

 return 0;
}