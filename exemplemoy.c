#include <stdio.h>

int main(){

    int notes[5];
    int S,i,n;
    float moy;
    

    printf("\nVeillez Entrez le nombre d'etudiant de votre groupe : ");
    scanf("%d", &n);

     
     S = 0;
    for(i=1;i<=n;i++){
        printf("\nEntrez la note %d de l'etudiant : ", i);
        scanf("%d", &notes[i]);
        
        S = S + notes[i];
    }


    moy = S/n;

    printf("\nLa moyenne de l'etudiant est : %.2f", moy);

    return 0;
}