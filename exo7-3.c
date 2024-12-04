#include <stdio.h>

int main(){

    int x,s,chiffre;

    s = 0;


    printf("\nEntrez un entier positif : ");
    scanf("%d", &x);

    while(x > 0){
    chiffre = x%10;
        s = s + chiffre;

        x = x/10;

    }
    
    printf("\nLa somme des entier qui composent est : %d", s);

}