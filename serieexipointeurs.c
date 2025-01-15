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

void exo2(){

    float a,b;
    float *p = &a;
    float *q = &b;

    printf("\nveillez entrez la valeur de a : ");
    scanf("%f", &a);
    
    printf("\nveillez entrez la valeur de b : ");
    scanf("%f", q);
    printf("\nLa somme est : %.1f", *p+*q);
    printf("\nLa multiplication est : %.1f", *p*(*q));
    printf("\nla division : %.1f", *p/(*q));
    printf("\nLa soustraction est : %.1f", *p - *q);

}

void exo3(){

    int a;

    int *p;
    p = &a;

    printf("\nVeillez entrez la valeur de a : ");
    scanf("%d", &a);

    if(*p%2==0){
        printf("\n%d est paire", *p);
    }else{
        printf("\n%d est impaire", *p);
    }

}

void exo4(){

    int *p;
    int x;

    p = &x;
    printf("\nVeillez entrez la valeur de x : ");
    scanf("%d", &x);
int i;
 printf("\nLes diviseurs de %d sont : ", *p);
    for(i=1;i<=*p/2;i++){
         if(*p%i==0){
            printf("\n%d", i);
         }
    }
    printf("\n%d", *p);
}

void fonction5(int *x, int *y){
    int temp;
    if(*x * *y>0){
    temp = *x;
     *x = *y;
    *y = temp;

    }else{
        int p = *x * *y;
        int s = *x + *y;

        *x = p;
        *y = s;
    }
   
}
void exo5(){

    int a,b;
    printf("\nVeillez entrez la valeur de a : ");
    scanf("%d", &a);

    printf("\nVeillez entrez la valeur de b : ");
    scanf("%d", &b);
    printf("\nAvant la permutation : a = %d, b = %d", a, b);
    fonction5(&a, &b);
    printf("\nApres l'echage a = %d, b = %d", a, b);


}
int main(){
   exo5();


   return 0;
}