#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "exo2.h"


int main(){

    temp t1,t2,t3;

    printf("\nRemplissage des informations : ");
    printf("\nTemp 1 : ");
    printf("\nVeillez entrez les infos de t1 : ");
    do{
        printf("\nHeures : ");
        scanf("%d", &t1.h);
    }while(t1.h<0 && t1.h > 59);
    do{
        printf("\nMinutes : ");
        scanf("%d", &t1.m);
    }while(t1.m < 0 && t1.m > 50);
    do{
        printf("\nSecondes : ");
        scanf("%d", &t1.s);
    }while(t1.s< 0 && t1.s > 59);

    printf("\nInformations du deuxieme temps : ");
    do{
        printf("\nHeures : ");
        scanf("%d", &t2.h);
    }while(t2.h<0 && t2.h > 59);
    do{
        printf("\nMinutes : ");
        scanf("%d", &t2.m);
    }while(t2.m < 0 && t2.m > 59);
    do{
        printf("\nSecondes : ");
        scanf("%d", &t2.s);
    }while(t2.s< 0 && t2.s > 59);

    t3 = diff(t1,t2);
    printf("\nLa difference entre les deux temps est : ");
    printf("\nHeures : %d", t3.h);
    printf("\nMinutes : %d", t3.m);
    printf("\nSecondes : %d", t3.s);




    return 0;
}