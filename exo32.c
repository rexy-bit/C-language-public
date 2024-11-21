#include <stdio.h>

int main(){

    int S,n,min,max,cpt,op;
    float moy;

    printf("\nEnter a number n : ");
    scanf("%d", &n);

    min = n;
    max = n;
    S = 0;
    cpt = 0;
    moy = 0;

    while(n != 0){

        S = S + n;
        cpt++;
        
        if(n<min){
            min = n;
        }else if(max<n){
            max = n;
        }
        printf("\nEnter a number n : ");
        scanf("%d", &n);

    }
    moy = S/cpt;
    
    do{
        printf("\nEntez 1 pour afficher le minimum : ");
        printf("\nEntrez 2 pour afficher le max : " );
        printf("\nEntrez 3 pour afficher la moyenne : ");
        scanf("%d", &op);
    }while(op == 1 && op == 2 && op == 3);
    
    switch(op){
        case 1 : printf("\nThe minimum is : %d", min);
        break;

        case 2 : printf("\nThe maximum is : %d ", max);
        break;

        case 3 : printf("\nLa moyenne est : %.2f", moy);
        break;

        default : 
           printf("\nErreur !!");
           break;

    }

    return 0;

    
}