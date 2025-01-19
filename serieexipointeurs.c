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

int exo11(){

    int x = 2;
    int *p;

    p = &x;
    
    printf("\nLa valeur de x est : %d", x);
    printf("\nla valeur de p = %d", *p);
    printf("\nL'adresse de x est : %d", &x);
    printf("\nL'adresse du pointeur x est : %p", &p);
    printf("\nL'adresse de x en hexadecimale est %p", &x);
    printf("\nL'adresse de la variable sur laquelle pointe le pointeur est : %p", p);

    return 0;

}

int exo22(){

     float num1,num2;

     float *p = &num1;
     float *q = &num2;

     printf("\nVeillez enrez la valeur de num1 : ");
     scanf("%f", p);

     printf("\nVeillez entrez la valeur de num2 : ");
     scanf("%f", q);

     printf("\nLa somme des deux nombres est : %.2f", *p + *q);
     printf("\nLa soustraction des deux nombres est : %.2f", *p - *q);
     printf("\nLa multiplication des deux nombres est : %.2f", *p * *q);
     if(num2 != 0)
     printf("\nla division des deux nombres est : %.2f", *p / *q);
      else
        printf("\nla division est malheuresement impossible");


    return 0;
     
}

int exo33(){

    int x;
    int *p = &x;

   int cpt;
   int *q = &cpt;

   do{
    printf("\nVeillez entrez un entier : ");
    scanf("%d", p);

    if(*p%2 == 0){
        printf("\n%d est paire", *p);
    }else{
        printf("\n%d est impaire", *p);
    }

    printf("\nTapez 1 pour recommencer et 0 pour sortir du programme");
    scanf("%d", q);
   }while(*q != 0);

   printf("\n********************\nSortie du programme");

   return 0;
}

int exo44(){

    int x;
    int *p = &x;

    printf("\nVeillez entrez un entier : ");
    scanf("%d", p);

    int i;
    for(i=1;i<=*p/2;i++){
        if(*p%i==0){
            printf("\n%d", i);
        }
    }
    printf("\n%d", x);

    return 0;
}

void echange55(int *x, int *y){
    int temp;

    if(*x * *y > 0){
        temp = *x;
        *x = *y;
        *y = temp;
    }else{
        int c = *x * *y;
        int s = *x + *y;

        *x = c;
        *y = s;
    }
}
int exo55(){

    int a,b;
    int *p = &a;
     int *q = &b;

     printf("\nveillez entrez la valeur de a : ");
     scanf("%d", p);
     printf("\nveillez entrez la valeur de b : ");
     scanf("%d", q);
 
    printf("\nAvant l'echange : a = %d, b = %d",*p,*q );
    echange55(p,q);
    printf("\nApres l'echange : a = %d, b = %d", *p , *q);

    return 0;
     
}

int exo7(){

    int N;
    
    do{
        printf("\nveillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int *p;
    int T[N];
    p = T;
    //p = T[0];

    for(p = T;p<N + T;p++){
        printf("\nVeuillez entrez la valeur de la case %d : ", p-T);
        scanf("%d", p);//&T[p];
    }
 printf("\nVoici votre tableau : \n");
    for(p=T;p<T+N;p++){
        printf(" %d | ", *p);
    }

    return 0;
}

void exoone(){

   int x = 5;

   int *p;

   p = &x;

   printf("\nLa valeur de x est : %d", x);
   printf("\nLa valeur de p = %d", *p);
   printf("\nL'adresse de x est : %d", &x);
   printf("\nL'adresse de x en hexadecimale est : %p",&x);
   printf("\nL'adresse de p en hexadecimale est : %p", &p);
   printf("\nL'adresse de p en decimale est : %d", &p);
   
}

int calculatricepointeurs(){

    float a,b;

    int *p, *q;

    printf("\nVeillez entrez la valeur de a : ");
    scanf("%d", &a);

    printf("\nVeillez entrez l avaleur de b : ");
    scanf("%d", &b);
    
    p = &a;q=&b;

    printf("\nLa somme de a et b est : %d+%d = %d", *p,*q,*p+ *q);
    printf("\nLa soustraction de a et b est : %d - %d = %d", *p, *q, *p - *q);
    printf("\nLa multiplication de a et b est : %d * %d = %d", *p , *q, *p * *q);
    printf("\nLa division de a et b est : %d / %d = %d", *p, *q, *p / *q);


    return 0;

    
}


void paire(){

    int x;
    int *p = &x;
    

    printf("\nVeillez entrez la valeur de x : ");
    scanf("%d", &x);

  if(*p%2 == 0){
    printf("\nLe nombre est paire");

  }else{
    printf("\nLe nombre est impaire");
  }
    
    }

    void diviseurs(){
        int x;

        
        
        printf("\nVeillez entrez la valeur de x : ");
        scanf("%d", &x);

        int *p = &x;

        int i;
    printf("\nLes diviseurs de %d sont : ", *p);
        for(i=1;i <= *p/2;i++){
            if(*p%i == 0){
                printf("\n%d", i);
            }
        }
        printf("\n%d", *p);
        
            }


        void lech(int *x, int *y){

            int temp;

            temp = *x;
            *x = *y;
            *y = temp;

        }
        void ech(){

            int a,b;

            int *p,*q;

            printf("\nVeillez entrez la valeur de a : ");
            scanf("%d", &a);

            printf("\nVeillez entrez la valeur de b : ");
            scanf("%d", &b);

            p = &a;
            p = &b;

            printf("\nAvant l'echange : a = %d, b = %d", a, b);
            lech(p,q);

            printf("\nApres l'echange : a = %d, b = %d", a, b);
            
                    }

    int tab1(){

        int N;

        do{
            printf("\nVeillez entrez la taille du tableau : ");
            scanf("%d", &N);
        }while(N<=0);

        int T[N];

        int *p = T;

        for(p=T;p<N+T;p++){
           printf("\nVeillez entrez la valeur de la case %d : ", p - T + 1);
           scanf("%d", p);
        }

        printf("\nVoici votre tableau : \n");
        for(p=T;p<N+T;p++){
            printf(" %d | ", *p);
        }
       return 0;
    }


    void supp(){

        int N;

        do{
            printf("\nVeillez entrez la taille du tableau : ");
            scanf("%d", &N);
        }while(N<=0);

        int T[N];

        int *p = T;

        printf("\nRemplissage du tableua : ");
        for(p=T;p<N+T;p++){
            printf("\nVelliez entrez la valeur de la case %d : ");
            scanf("%d", p);
        }

        printf("\nVoici votre tableau : ");
        for(p=T;p<T+N;p++){
            printf(" %d  | ", *p);
        }
         int val;
        int *q = &val;

        printf("\nVeillez entrez la valeur que vous voulez supprimer : ");
        scanf("%d", q);
          int j;
        for(p=T;p<N+T;p++){
            if(*p == *q){

                for(j = p-T;j<N+T-1;j++ ){
                     T[j]=T[j+1];
                }
                N--;
                p--;
            }
        }

        printf("\nVoici votre tableau apres la supression de %d : \n", *q);
        for(p=T;p<N+T;p++){
            printf(" %d | ", *p);
        }

    }
int main(){
   
   supp();

    
   return 0;
}