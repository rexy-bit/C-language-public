#include <stdio.h>


int A,B;

void saisie(){
       printf("\nVeillez entrez la valeur de A : ");
    scanf("%d", &A);

    printf("\nVeillez entrez la valeur de B : ");
    scanf("%d", &B);
}
void signe(){

    if(A*B>0){
        printf("\n%d et %d sont de meme signe", A, B);
    }else{
        printf("\n%d et %d ne sont pas de meme signe", A, B);
    }

}



int maximum(){

    if(A == B){
        printf("\n%d et %d sont egaux le maximum n'existe pas", A, B);
    }

    if(A<B){
        return B;
    }else{
        return A;
    }
}


int minimum(){
    if(A == B){
        printf("\n%d et %d sont egaux donc max et min n'existent pas ", A,B);
    }

    if(A<B){
        return A;
    }else{
        return B;
    }

   
}
int main(){

    

    int min,max;

    saisie();

    signe(A, B);
    min = minimum(A,B);
    max = maximum(A,B);

    printf("\nLe minimum est : %d", min);
    printf("\nLe maximum est : %d", max);

    printf("\n\n");

    printf(2 + 0);

    return 0;

}

