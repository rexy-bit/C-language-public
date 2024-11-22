#include <stdio.h>

int main(){

    int n, min,max,cpt,s,op;
    float moy;

    printf("\nVeillez entrez un nombre n : ");
    scanf("%d", &n);

    min = n;
    max = n;
    cpt = 0;
    moy = 0;
    s = 0;


    while(n != 0){

        cpt++;
        s = s + n;
        
        if(n<min){
            min = n;
        }else if(max>n){
            max = n;

        }
        printf("\nVEillez entrez un nombre n : ");
        scanf("%d", &n);

    }

    moy = s/cpt;

    printf("\nEntrez un 1 pour afficher le minimum : ");
    printf("\nEntrez un 2 pour afficher le maximum : ");
    printf("\nENtrez un 3 pour afficher la moyenne : \n");
    printf("\n");
    scanf("%d", &op);

    switch(op){
        case 1 : printf("\nLe minimum est : %d", min);
        break;

        case 2 : printf("\nLe maximum est : %d", max);
        break;

        case 3 :  printf("\nLa moyenne est : %.2f", moy);
        break;


        default : 
          printf("\nLe nombre n'est pas 1 ou 2 ou 3 : veillez resaisir un autre nombre");
          break;

    }

    return 0;

}