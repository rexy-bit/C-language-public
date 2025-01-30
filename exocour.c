#include <stdio.h>

int main(){

    int T[6];
    int i;
    int S;
    int *p;
    p = T;
   S = 0;

   for(p = T; p < T + 6; p++){
    printf("\nVeillez entrez la valeur de %d : ", p - T);
    scanf("%d", p);
   }
   printf("\nVoici votre tableau : \n");
   for(p = T;p<T+6;p++){
    printf(" %d | ", *p);
   }
   
   printf("\nCalculons la somme des elements du tableau : \n");
   for(p = T;p<T+6;p++){
    S += *p;
   }

   printf("\nLa somme est : %d", S);
    

    return 0;
}