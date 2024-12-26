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

int main(){
    int n;

    printf("\nVeillez entrez un entier n : ");
        scanf("%d", &n);
 
     printf("\nLe cube de %d est : %d ",n, Cube(n));


    
    return 0;
}