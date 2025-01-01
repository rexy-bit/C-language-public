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

int test(int i){

    int j;
    i++;
    j = i+3;


    return j;
    return i;
}

bool premier2(int x){
     bool p;

     int i;

     if(x == 1){
        p = false;
     }else{
        p = true;
        i = 2;
        while(i<=x/2 && p==true){
            if(x%i==0){
                p = false;
            }
            i++;
        }

     }  

     return p; 
}

int nbr(int x){

    int n;
    n = 0;

    while(x>0){
        x=x/10;
        n++;
    }
    return n;
}


int diametre(int x){

    int d;
    d = 2*x;

    return d;
}

float surface(int x){

    float s;
    s = 3.14*pow(x, 2);

    return s;
}

float per(int x){

    float p;
    p = 2*3.14*x;

    return p;
}
 float a,b,c;
float delta(){
    int d;
    d = pow(b, 2) - 4*a*c;

    return d;
}

void sol(int a, int b, int c){
    float x1, x2, x0;

    if(delta()>0){
        x1 = (-b + sqrt(delta()))/(2*a);
        x2 = (-b - sqrt(delta()))/(2*a);

        printf("\nL'equation possede deux solutions sur R : %.2f, %.2f", x1, x2);
    }else if(sqrt(delta())==0){
        x0 = -b/(2*a);

        printf("\nL'equation possede une seul solution dans R : %.2f", x0);
        
    }else{
        printf("\nPas de solutions dans R : ");
    }
}

float a,b,c;

int del(){

    float d;
    d = pow(b, 2) - 4*a*c;

    return d;

}

float somme(float T[], int N){

    int i;
    float S;
    S=0;

    for(i=0;i<N;i++){
     S = S + T[i];
    }

    return S;
}

float produit (float T[], int N){

    int i;
    float p = T[1];

    for(i=1;i<N;i++){
        p =p*T[i];
    }

    return p;
}


float moyenne (float T[], int N){

    float moy = somme(T,N)/N;

    return moy;
}

void negposi(float T[],int N){
     int i;
     
     printf("\nVoici les nombres positifss : ");
     for(i=0;i<N;i++){
        if(T[i]>0){
            printf(" %f | ", T[i]);
        }
     }

     printf("\nVoici les nombrzes negatifs : ");

     for(i=0;i<N;i++){
       if(T[i]<0){
        printf(" %f | ", T[i]);
       }
     }

  }
void solu(){

    float X1,X2;
    float X0;

    if(delta()>0){
        printf("\nL'equation possede deux solutions sur l'ensemble R : ");
        X1 =(-b + sqrt(delta()))/2*a;
        X2 = (-b + sqrt(delta()))/2*a;

        printf("\nLes solutions X1 = %.2f, X2 = %.2f", X1, X2);

    }else if(delta()==0){
        printf("\nL'equation possede une solution unique sur R qui est : ");
        X0 = -b/(2*a);
        printf("\nLa solution de l'equation est : %.2f", X0);
    }else{
        printf("\nL'quation ne possede de solution sur R ");
    }
}


int main(){

   
    int i,N;

    do{
        printf("\nVeillez entrez l ataille de vpotre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    float V[N];

    for(i=0;i<N;i++){
        printf("\nVeillez netrez la valeur de la case %d : ", i+1);
        scanf("%f", &V[i]);
    }

    printf("\nVoici votre tableau : ");
    for(i=0;i<N;i++){
        printf(" %f | ", V[i]);
    }

    printf("\nLa somme de votre tableau est : %.2f", somme(V, N));
    printf("\nLe produit de votre tableau est : %.2f", produit(V, N));
    printf("\nLa moyenne de votre tableau est : %.2f", moyenne(V,N));
    negposi(V,N);
     return 0;
}