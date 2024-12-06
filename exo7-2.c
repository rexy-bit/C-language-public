#include <stdio.h>

int main(){

    int d,vd,b,r,p;

    printf("\nVeillez entrer un nombre en decimale : ");
    scanf("%d", &d);

    vd = d;
    b = 0;
    r = 0;
    p = 1;

    do{
        r = d%2;
        b = b + r*p;
        d = d/2;
        p = p*10;

    }while(d>0);

    printf("\n%d decimale en binaire est : %d", vd, b);

    return 0;


}