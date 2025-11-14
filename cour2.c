#include <stdio.h>
#include <stdlib.h>


int main(){


    int N;
    do{
        printf("\nVeillez entrez la taille du tableau que vous voulez allouer dynamiquement : ");
        scanf("%d", &N);
    }while(N<0);

    int *p = malloc(N*sizeof(int));

    if(p == NULL){
        printf("\nLa memoire n'est pas alloue.");
        exit(0);
    }else{

        int S = 0;
        float M;

    for(int i = 0;i<N;i++){
        printf("\nVeillez entrez l'element numero %d : ", i);
        scanf("%d", p+i);
        S = S + *(p+i);
    }

    printf("\nVoici votre tableau : \n");
    for(int i = 0;i<N;i++){
        printf("%d | ", *(p+i));
    }

    M = S/N;

    printf("\nLa somme est : %d", S);
    printf("\nLa moyenne est : %.2f", M);

    
}

free(p);

return 0;
}