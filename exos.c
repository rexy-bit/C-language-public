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

   
     return 0;
     
}

float sum(float T[], int N){
        float S = T[1];
          int i;
        for(i=1;i<N;i++){
            S = S + T[i];
        }
         return S;
}
float moyy(float T[], int N){
    float moy = sum(T, N)/N;
    
    return moy;
}

float prod(float T[], int N){
    float P = T[1];
int i;
    for(i=0;i<N;i++){
          P=P*T[i];
    }
    return P;
}

int minimum(int T[], int N){

    int min = T[1];
    int i;

    for(i=0;i<N;i++){
        if(T[i]<min){
            min = T[i];
        }
    }

    return min;
}

int maximum(int T[], int N){

    int max = T[1];
int i;
for(i=0;i<N;i++){
    if(max<T[i]){
        max = T[i];
    }

}

return max;
}

void inverse(int T[], int N){
    int i,j;
    int V[N];

    i=0;j=N;

    while(i<N){
       V[j-1]=T[i];
     i++;
     j--;
    }
    

   printf("\nVoici le tableau inverser : ");
printf("\n");
   for(i=0;i<N;i++){
    printf(" %d | ", V[i]);
   }

   
}

int main(){

   int i,N;

   do{
    printf("\nVeillez entrez la taille de votre tableau : ");
    scanf("%d", &N);
   }while(N<=0);
int T[N];
   for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d ", i+1);
        scanf("%d", &T[i]);
   }

   printf("\nVoici votre tableau : ");
   for(i=0;i<N;i++){
    printf(" %d | ", T[i]);
   }


   printf("\nLe min est : %d", minimum(T,N));
   printf("\nLe maximum est : %d", maximum(T,N));
   
   
    inverse(T,N);
   return 0;
}