#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIVRES 100

void menu() {
    printf("\nVeuillez sélectionner la tâche que vous voulez effectuer :");
    printf("\n1 - Afficher le contenu de votre bibliothèque.");
    printf("\n2 - Rechercher un livre à partir de son nom.");
    printf("\n3 - Ajouter un livre.");
    printf("\n4 - Supprimer un livre.");
    printf("\n5 - Quitter le programme.\n");
}

void afficherBibliotheque(int N, char titre[N][100], char auteur[N][100], int annee[N], int code[N]) {
    printf("\nVoici le contenu de votre bibliothèque : ");
    printf("\n----------------------------------------------------");
    printf("\nTitre\t\t\tAuteur\t\t\tAnnée\t\t\tCode");

    for (int i = 0; i < N; i++) {
        printf("\n%s\t\t\t%s\t\t\t%d\t\t\t%d", titre[i], auteur[i], annee[i], code[i]);
    }
    printf("\n----------------------------------------------------\n");
}

void rechercher(int N, char titre[N][100]) {
    char nomRecherche[100];
    printf("\nVeuillez entrer le nom du livre que vous recherchez : ");
    getchar();
    fgets(nomRecherche, 100, stdin);
    nomRecherche[strcspn(nomRecherche, "\n")] = 0; // Supprime le '\n'

    bool trouve = false;
    for (int i = 0; i < N; i++) {
        if (strcmp(nomRecherche, titre[i]) == 0) {
            trouve = true;
            break;
        }
    }

    if (trouve) {
        printf("\nLe livre '%s' existe dans la bibliothèque.\n", nomRecherche);
    } else {
        printf("\nLe livre '%s' n'existe pas dans la bibliothèque.\n", nomRecherche);
    }
}

void supprimer(int *N, char titre[*N][100], char auteur[*N][100], int annee[*N], int code[*N]) {
    int codeSup;
    printf("\nSuppression d'un livre : ");
    printf("\nVeuillez entrer le code du livre à supprimer : ");
    scanf("%d", &codeSup);
    getchar();

    int i, j;
    bool trouve = false;
    for (i = 0; i < *N; i++) {
        if (code[i] == codeSup) {
            trouve = true;
            for (j = i; j < *N - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                annee[j] = annee[j + 1];
                code[j] = code[j + 1];
            }
            (*N)--;
            break;
        }
    }

    if (trouve) {
        printf("\nLivre supprimé avec succès.\n");
    } else {
        printf("\nAucun livre trouvé avec ce code.\n");
    }
}

void ajouter(int *N, char titre[*N][100], char auteur[*N][100], int annee[*N], int code[*N]) {
    if (*N >= MAX_LIVRES) {
        printf("\nCapacité maximale atteinte !\n");
        return;
    }

    printf("\nAjout d'un livre : ");
    getchar();
    printf("\nVeuillez entrer le titre du livre : ");
    fgets(titre[*N], 100, stdin);
    titre[*N][strcspn(titre[*N], "\n")] = 0;

    printf("\nVeuillez entrer l'auteur : ");
    fgets(auteur[*N], 100, stdin);
    auteur[*N][strcspn(auteur[*N], "\n")] = 0;

    printf("\nVeuillez entrer l'année de publication : ");
    scanf("%d", &annee[*N]);

    printf("\nVeuillez entrer le code du livre : ");
    scanf("%d", &code[*N]);
    getchar();

    (*N)++;
    printf("\nLivre ajouté avec succès !\n");
}

int main() {
    printf("\nBienvenue dans votre logiciel bibliothèque.");
    int nbrLivres;

    do {
        printf("\nVeuillez entrer le nombre initial de livres : ");
        scanf("%d", &nbrLivres);
    } while (nbrLivres <= 0);
    getchar();

    char titreLivre[MAX_LIVRES][100];
    char auteurLivre[MAX_LIVRES][100];
    int anneeLivre[MAX_LIVRES];
    int codeLivre[MAX_LIVRES];

    for (int i = 0; i < nbrLivres; i++) {
        printf("\nVeuillez entrer le titre du livre numéro %d : ", i + 1);
        fgets(titreLivre[i], 100, stdin);
        titreLivre[i][strcspn(titreLivre[i], "\n")] = 0;

        printf("\nVeuillez entrer le nom de l'auteur du livre '%s' : ", titreLivre[i]);
        fgets(auteurLivre[i], 100, stdin);
        auteurLivre[i][strcspn(auteurLivre[i], "\n")] = 0;

        do {
            printf("\nVeuillez entrer l'année de publication : ");
            scanf("%d", &anneeLivre[i]);
        } while (anneeLivre[i] <= 0 || anneeLivre[i] > 2025);
        getchar();

        do {
            printf("\nVeuillez entrer le code du livre : ");
            scanf("%d", &codeLivre[i]);
        } while (codeLivre[i] < 0);
        getchar();
    }

    int choix;
    do {
        menu();
        do {
            printf("\nVeuillez entrer le numéro de la tâche que vous voulez effectuer : ");
            scanf("%d", &choix);
        } while (choix < 1 || choix > 5);

        if (choix == 1) {
            afficherBibliotheque(nbrLivres, titreLivre, auteurLivre, anneeLivre, codeLivre);
        } else if (choix == 2) {
            rechercher(nbrLivres, titreLivre);
        } else if (choix == 3) {
            ajouter(&nbrLivres, titreLivre, auteurLivre, anneeLivre, codeLivre);
        } else if (choix == 4) {
            supprimer(&nbrLivres, titreLivre, auteurLivre, anneeLivre, codeLivre);
        }

        if (choix != 5) {
            int Poursuivre;
            do {
                printf("\nVoulez-vous poursuivre le programme ? Tapez 1 pour oui et 0 pour non : ");
                scanf("%d", &Poursuivre);
            } while (Poursuivre < 0);
            if (Poursuivre == 0) break;
        }
    } while (choix != 5);

    printf("\nBonne journée et merci d'avoir utilisé notre logiciel !\n");
    return 0;
}
