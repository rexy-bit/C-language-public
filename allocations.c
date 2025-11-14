#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



void exo1(){
  float *prixAchat = malloc(sizeof(float));
    float *prixVente = malloc(sizeof(int));
    float *p = malloc(sizeof(int));

    printf("\nEntrez le prix d'achat : ");
    scanf("%f", prixAchat);

    printf("\nEntrez le prix de vente : ");
    scanf("%f", prixVente);

    *p = *prixVente - *prixAchat;

     if(*p < 0){
        printf("\nVous perdez : %.2f Da", -(*p));
     }else{
        printf("\nVous gagnez : %.2f Da", *p);
     }

     free(prixAchat);
     free(prixVente);
     free(p);
}


void exo2(){

    int N, i,min, max;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<= 0);

    int *T = calloc(N, sizeof(int));

    if(T == NULL){
        printf("\nLa memoire n'est pas alloué.");
        return 0;
    }

    printf("\nRemplissage du tableau : ");
    for(i = 0;i<N;i++){
        printf("\nEntrez la valeur de la case %d : ", i+1);
        scanf("%d", T + i);
    }

    printf("\nAffichage du tableau : ");
    for(i = 0;i<N;i++){
        printf(" %d |", *(T + i));
    }

     min = *T;
     max = *T;

    for(i = 1;i<N;i++){
        if(*(T + i) < min){
            min = *(T + i);
        }

        if(max < *(T +i)){
            max = *(T +i);
        }
    }

    printf("\nMax : %d", max);
    printf("\nMin : %d", min);


}


typedef struct Node{

    int info;
    struct Node* next;

}Node;


void affListe(Node* L){

    Node* p = L;

    if(L == NULL){
        printf("\nProbleme empty list");
        return;
    }
    printf("\nThe List : ");

    while(p != NULL){
      printf(" %d |", p->info);
      p = p->next;
    }

}

void creationListe(Node* L){

    int stop;
    L = NULL;
    Node* p;

    printf("\nRemplissage de la liste chainee");

    do{
    
        p = (Node*) malloc(sizeof(Node));
        if(p == NULL){
            printf("\nError in memory allocation");
            return;
        }

        printf("\nEnter an integer : ");
        scanf("%d", p);
        p->next = L;
        L = p;

        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);
        
    }while(stop != 0);

    affListe(L);


}
int main(){

    
     Node* L;

     creationListe(L);


    return 0;
    

}