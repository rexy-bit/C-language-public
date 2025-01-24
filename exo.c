#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void exo1(){

    char c[10];

    printf("\nVeillez entrez le contenu de la chaine : \n");
    gets(c);
    puts(c);

}

void exo2(){

    char m1[10],m2[10];
    int i,n;
    n=0;

    printf("\nVeillez entrez la valeur de la premiere chaine : \n");
    gets(m1);

    printf("\nVeillez entrez la valeur de la deuxieme chaine : \n");
    gets(m2);

    printf("\nLa premiere chaine est : ");puts(m1);
    printf("\nLa deuxieme chaine est : ");puts(m2);
    if(strlen(m1)==strlen(m2)){
        for(i=0;i<strlen(m1);i++){
           if(m1[i]!=m2[i]){
            n++;
           }
        }

        printf("\nLa taille de hamming entre les deux chaine est : %d", n);
    }else{
        printf("\nLes deux chaine n'on pas la meme taile");
   }
}
int main(){

  exo2();

    return 0;
}
