#include <stdio.h>

int main(){

    int n,i,j,p;

   

     p = 1;

     
     for(i = 1;i<= 10;i++){

        printf("\nLa table de multiplication de %d est : ", i);
         for(j = 0;j<=10;j++){
            p = i*j;
            printf("\n%d * %d = %d", i,j,p);
         }

         printf("\n\n\n\n\n");
     }


     return 0;

     
    

}