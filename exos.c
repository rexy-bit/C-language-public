#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void Table(int X){
      int i;
      printf("\nLa table de multiplication de %d est : ", X);
      for(i=1;i<=10;i++){
         printf("%d*%d = %d\n", X,i,X*i);
         
      }
}

int Cube(int X){

    int c;
    c=X*X*X;

    return c;
}

void Table2(int X){

    int i;

    printf("\nLa table de multiplication de %d est : ", X);
    for(i=1;i<=10;i++){
        printf("%d*%d = %d\n",X,i,X*i);
    }

}


int Cube2(int X){
    int c;
    c=X*X*X;

    return c;
}


bool annee(int X){

    bool p = false;

    if((X%4==0 && X%100!=0) || (X%4==0)){
        p = true;
    }

    return p;
}


bool premier(int X){
    int i;
    bool p = true;

    if(X == 1){
        p = false;
    }

    i=2;
    while(i<=X/2 && p==true){
        if(X%i == 0)
           {
            p=false;
           }
    }

    return p;
}

int ch(int x){

    int nbr=0;
    while(x>0){
        x = x/10;
        nbr++;
    }

    return nbr;
}

int main(){

printf("\nYou are beautiful");
}