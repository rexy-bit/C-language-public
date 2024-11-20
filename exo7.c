#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int ex1(){
       int p,b,vb,d;

       do{
        printf("\nEntrez un nombre en binaire : ");
        scanf("%d", &b);
       }while(b<0);

       vb = b;
       d = 0;
       p = 1;

       while(b!=0){
          d = d + (b%10)*p;
          p = p*2;
          b = b/10;
       }

       printf("\nLa valeur de %d en decimale est %d", vb, d);

       return 0;
}

int ex2(){

    int d,vd,b, p;

    do{
        printf("\nVeillez entrez un nombre en decimale : ");
        scanf("%d", &d);
    }while(d<0);

    vd = d;
    b = 0;
    p = 1;

    while(d!=0){

        b = b + (d%2)*p;
        d = d/2;
        p = p*10;

    }

    printf("\n%d en binaire est : %d", vd, b);

    return 0;
}

int ex3(){

    int S,d,n,vn;

     do{
        printf("\nVeillez entrez un nombre positif : ");
        scanf("%d", &n);
     }while(n<0);
     S = 0;
     vn = n;

     while(n!=0){
        d = n%10;
        n = n/10;
        S = S + d;
     }

     printf("\nLa somme des entiers qui composent %d est : %d", vn, S);

     return 0;
}

int ex4(){

    int n,inv,d,vn;

    do{
        printf("\nVeillez entrez un entier positif : ");
        scanf("%d", &n);
    }while(n<0);

    inv = 0;
    vn = n;

    while(n!=0){
        d = n%10;
        n = n/10;
        inv = inv*10 + d;
    }

    printf("\nLinverse de %d est : %d", vn, inv);

    return 0;
}
int main(){

    ex4();

    return 0;

}