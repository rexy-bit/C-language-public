#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
    /*
ar c[20];

    printf("\nVeillez entrez votre nom : ");
    ge
    chts(c);

    printf("\nVotre nom est : %s", c);
    printf("\n%.3s", c);
    
    puts(c);*
    */

   char c[]="Yanis";
   puts(c);
   int n = strlen(c);
   

   printf("%d", n);
   printf("\n%s", strrev(c));
   printf("\n%s", strlwr(c));
   printf("\n%s", strupr(c));


    return 0;
}