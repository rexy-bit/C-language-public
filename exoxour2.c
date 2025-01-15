#include <stdio.h>

int main(){

    int N;
    int *p;
    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    p = T;

    for(p=T;p<T+N;p++){
        printf("\nVeillez entrez la valeur de la case %d : ", p-T);
        scanf("%d", p);
    }

    printf("\nVoici votre tableau : ");
    for(p = T;p<T+N;p++){
        printf(" %d | ", *p);
    }
    p = T;
    int min = *p;

    for(p=T+1;p<T+N;p++){
        if(*p<min){
            min = *p;
        }
    }
    printf("\nLe minimum est : %d", min);

    return 0;
}