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


int main(){

   

    printf("\nVeillez entrez la valeur de a : ");
    scanf("%f", &a);

    printf("\nVeillez entrez la valeur de b : ");
    scanf("%f", &b);

    printf("\nVeillez entrez l avleur de c : ");
    scanf("%f", &c);

    sol(a,b,c);

     return 0;
}