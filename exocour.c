#include <stdio.h>
#include <string.h>

int main(){


    char c[10];

   printf("\nVeillez entrez la chaine de c1 : ");
   gets( c );
    char a[10];

    int i;
    for(i=0;c[i]!='\0';i++){
        a[i]=c[i];
    }
    a[i]='\0';
    puts(a);
    
}