#include <stdio.h>

void echange(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int a,b;

    a=1,b=2;
    printf("\nAvant l'echange a = %d, b = %d\n", a, b);
    echange(&a,&b);
    printf("\nApres l'echange a = %d, b = %d\n", a, b);

     return 0;
}