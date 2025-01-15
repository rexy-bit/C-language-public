#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

void exo1(){

    int x = 2;
    int *p;

    p = &x;

    printf("\n%d", *p);
    printf("\n%p", p );
    printf("\n%d", &p);
    printf("\n%d", &x);
    printf("\nx = %d", x);
    printf("\nL'adresse de x = %p", &x);
    printf("\nL'adresse de p est p = %p", &p);
    printf("\nLa valaeur sur laquelle pointe p est : %d", *p);


}
int main(){
   exo1();


   return 0;
}