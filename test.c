#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <assert.h>

int tab(){
     int N = 10;
    char tab[N];
    int i,j,temp;

     for(i=0;i<N;i++){
       printf("\nVEillez entrez un charactere : ");
       scanf(" %c", &tab[i]);
     }

     for(i=0;i<N;i++){
        printf(" %c | ", tab[i]);
     }
     
  
    j=N-1;
    i=0;

    while(i<j){
        temp = tab[i];
        tab[i]=tab[j];
        tab[j]=temp;

        i++;
        j--;
    }

    printf("\n\n");

    printf("\nLe tableau inverser est : ");

    for(i=0;i<N;i++){
        printf(" %c | ", tab[i]);
    }


     return 0;



}


int main(){

   tab();

}