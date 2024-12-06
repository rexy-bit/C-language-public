#include <stdio.h>


int main(){


    //printf("%d", array[0]);
/*
    printf("\nVeillez saisir la note de l'etudiant numero 3 : ");
    scanf("%d", &array[2]);

    printf("\nLa note de l'etudiant 3 : %d", array[2]);


printf("\nEntrez la note du dernier etudiant de la liste : ");
scanf("%d", &array[317]);

printf("\nLa note du dernier etudiant de la liste est : %d", array[317]);
*/

int notes[6];
int i;
for(i = 0; i<6;i++){
    printf("\nVEillez entrez une valeur n pour la case %d : ", i);
    scanf("%d", &notes[i]);
}
printf("\nLes notes sont : ");
for(i=0; i<6;i++ ){

    printf("%d -- ", notes[i]);
}










}