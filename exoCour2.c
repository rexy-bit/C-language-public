#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

typedef struct{
    char nomEquipe[100];
    char coach[100];
    char stade[100];
    char pays[100];
}equipe;

typedef struct{
    char nom[70];
    int numero;
    char poste[50];
    equipe eqp; 

}joueur;


void affiche(int N, joueur T[N]){
    int i;
    for(i=0;i<N;i++){
        printf("\nNom : %s",T[i].nom);
        printf("\nEquipe : %s", T[i].eqp.nomEquipe);
    }
}

void afficheAttaque(int N, joueur T[N]){

    int i;

    printf("\n\nListe des joueurs qui jouent en attaque : ");
    for(i=0;i<N;i++){
        if(strcmp(T[i].poste, "Attaque") == 0){
            printf("\nNom : %s", T[i].nom);
        }
    }
}

void modifi(int N, joueur *T){
    int i;
    char nom2[100];

    printf("\nVeillez entrez le nom du joueur qui veut changer de club : ");
    scanf(" %[^\n]s", &nom2);

    for(i=0;i<N;i++){
        if(strcmp(T[i].nom, nom2)==0){
            printf("\nVeillez entrez le nouveau club de %s : ", T[i].nom);
            scanf(" %[^\n]s", &T[i].eqp.nomEquipe);
            printf("\nveillez entrez le nouveau numero de %s : ", T[i].nom);
            scanf("%d", &T[i].numero);
            printf("\nVeillez entrez le nom du coach de %s : ", T[i].eqp.nomEquipe);
            scanf(" %[^\n]s", &T[i].eqp.coach);
            printf("\nVeillez entrez le nouveau stade de l'equipe : %s", T[i].eqp.nomEquipe);
            scanf(" %[^\n]s", &T[i].eqp.stade);
            printf("\nVeillez entrez le nouveau pays de l'equipe : %s", T[i].nom);
            scanf(" %[^\n]s", &T[i].eqp.pays);
        }
    }
}


void affichageInfo(int N, joueur T[N]){
   int i;
   printf("\nVoici votre data de jouers : ");
   for(i=0;i<N;i++){
    printf("\nNom : %s",T[i].nom );
    printf("\nNumero : %d", T[i].numero);
    printf("\nposte : %s", T[i].poste);
    printf("\nEquipe : %s", T[i].eqp.nomEquipe);
    printf("\nCoach : %s", T[i].eqp.coach);
    printf("\nStade : %s", T[i].eqp.stade);
    printf("\nPays : %s", T[i].eqp.pays);
   }
}

int main(){

     int N;

     do{
        printf("\nVeillez entrez le nombre de joueur que vous voulez initialment enregistrer : ");
        scanf("%d", &N);
     }while(N<=0);

     int i;
     joueur T[N];

     printf("\nRemplissage des informations des joueurs : ");
     for(i=0;i<N;i++){
        printf("\n\nJoueur 1 : ");
        printf("\nNom : ");
        scanf(" %[^\n]s", &T[i].nom);
        printf("\nAge : ");
        scanf("%d", &T[i].numero);
        printf("\nPoste : ");
        scanf(" %[^\n]s", &T[i].poste);
        printf("\nEquipe : ");
        scanf(" %[^\n]s", &T[i].eqp.nomEquipe);
        printf("\nCoach : ");
        scanf(" %[^\n]s", &T[i].eqp.coach);
        printf("\nStade : ");
        scanf(" %[^\n]s", &T[i].eqp.stade);
        printf("\nPays : ");
        scanf(" %[^\n]s", &T[i].eqp.pays);
     }

     affichageInfo(N,T);
     afficheAttaque(N,T);
     modifi(N, &T);
     affichageInfo(N,T);

    
}