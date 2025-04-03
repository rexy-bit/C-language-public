#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>


typedef struct{
    char nom[50];
    char stade[100];
    char coach[50];
    char pays[50];
} equipe;

typedef struct{
    char name[50];
    int numero;
    char poste[50];
    equipe eqp;
}joueur;

int main(){

 

    int N;

    do{
        printf("\nVeilleze entrez le nombre de joueur que vous voulez enregistrer : ");
        scanf("%d", &N);
    }while(N<0 && N>10);
    getchar();

    joueur T[N];
    int i;

    for(i=0;i<N;i++){
        printf("\nveillez entrez le nom du jouer numero %d : ", i);
        scanf(" %[^\n]s", &T[i].name);
        printf("\nVeillez entrez le numero du jouer %s : ", T[i].name);
        scanf("%d", &T[i].numero);
        printf("\nVeillez entrez le poste du joueur %s : ", T[i].name);
        scanf(" %[^\n]s", &T[i].poste);
        printf("\nVeillez entrez l'equipe de %s : ", T[i].name);
        scanf(" %[^\n]s", &T[i].eqp.nom);
        printf("\nVeillez entrez le nom du stade de l'equipe : %s",T[i].eqp.nom );
        scanf(" %[^\n]s", &T[i].eqp.stade);
        printf("\nVeillez entrez le nom du coach de l'equipe %s : ", T[i].eqp.nom);
        scanf(" %[^\n]s", &T[i].eqp.coach);
        printf("\nVeillez entrez le pays de l'equipe %s : ", T[i].eqp.nom);
        scanf(" %[^\n]s", &T[i].eqp.pays);
    }

    printf("\n\nAffichage : ");

    for(i=0;i<N;i++){
        printf("\nJoueur %d : ", i+1);
        printf("\nNom : %s", T[i].name);
        printf("\nNumero : %d", T[i].numero);
        printf("\nPoste : %s", T[i].poste);
        printf("\nEquipe : %s", T[i].eqp.nom);
        printf("\nStade : %s", T[i].eqp.stade);
        printf("\nCoach : %s", T[i].eqp.coach);
        printf("\nPays : %s", T[i].eqp.pays);
        printf("\n");
    }


   return 0;

}