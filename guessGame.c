#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(){

    int randomNumber = 0;
    bool r = false;
    int p;
    int cpt;

    int guess;

    const int max = 30, min = 1;
    srand(time(NULL));

    randomNumber  = (rand() % (max - min + 1)) + min;

    printf("\nL'ordinateur a choisi un nombre entre 1 et 30 .");
    printf("\n");

    do{

    

    do{

        cpt = 0;

        printf("\nVeillez devinez le nombre : ");
        scanf("%d", &guess);

        if(guess < randomNumber){
            printf("\nTrop bas !");
        }else if(guess>randomNumber){
            printf("\nTo haut !");
        }else{
            printf("\nCorrect");
            r = true;
            break;
        }

        cpt++;


    }while(cpt<6);


    if(r == true){
        printf("\n******************************************************");
         printf("\nVous avez ruessi a deviner le nombre, Bien jouer !!");
         printf("\n******************************************************");
    }else{
        printf("\nVous n'avez pas reussi : Recommencez !");
        
    }

    printf("\nEntrez 1 pour ressayer et 0 pour quiter : ");
    scanf("%d", &p);

    }while(p == 1);

   return 0;

    
}