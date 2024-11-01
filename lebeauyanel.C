#include <stdio.h>
int main(){
    char nom[100], prenom[100];

    printf("\nEntrez votre nom : ");
    scanf("%s", &nom);

    printf("\nEntrez votre prenom : ");
    scanf("%s", &prenom);

    printf("\nNom : %s, Prenom : %s", nom, prenom);

    if(prenom == "Yanel" ||  prenom == "yanel"){
        printf("\nPuisque c'est yanel je me doit de rajouter un commentaire speciale : ");
        printf("\n***************************************************************");
        printf("\nTu es tres beau yanel : )");

    }

    return 0;
}