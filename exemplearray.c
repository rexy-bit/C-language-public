#include <stdio.h>

int main(){

    int array[10];

    int i;

    printf("\nRemplissage du tableau de 10 case : ");

    for(i = 0;i<10;i++){
        printf("\nDonnez la valeur %d : ", i);
        scanf("%d", &array[i]);
    }
     printf("\n\n");
    printf("\nAffichage du tableau : ");

    for(i=0;i<10;i++){
        printf(" %d -", array[i]);
    }


    return 0;
}