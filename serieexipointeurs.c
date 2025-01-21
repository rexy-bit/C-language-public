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

    void afftab(){

        int N;

        do{
            printf("\nVeillez entrez la taille de votre tableau : ");
            scanf("%d", &N);
        }while(N<=0);

        int T[N];

        int *p = T;

        for(p=T;p<N+T;p++){
            printf("\nVeillez entrez la valeur de la case %d : ", p - T  );
            scanf("%d", p);
        }

        printf("\nVoici votre tableau : \n");
        for(p=T;p<T+N;p++){
            printf(" %d | ", *p);
        }
    }

    int suppval(){

        int N;

        do{
            printf("\nVeillez entrez la taille de votre tableau : ");
            scanf("%d", &N);
        }while(N<=0);

        int T[N];

    int *p = T;

    printf("\nRemplissage du tableau : ");
    for(p=T;p<T+N;p++){
        printf("\nVeilloez entrez la valeur de la case %d : ", p-T+1);
        scanf("%d", p);
    }

    printf("\nVoici votre tableau : \n");
    for(p=T;p<T+N;p++){
        printf(" %d | ", *p);
    }


    int val;

    printf("\nVeillz entrez l'indice de la case de la valeur que vous voulez supprimer : ");
    scanf("%d", &val);

    int *p2 = T;
   for(p=T;p<T+N;p++){
    *p2 = *p;

    if(*p2 != val){
        p2++;
    }
   }

   N = p2-T;
   printf("\nVoici votre tableau apres la supression de %d : \n", val);
   for(p=T;p<T+N;p++){
    printf(" %d | ", *p);
   }

    return 0;
    }

  void suppval2(){

    int N;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    int i,j;

    for(i=0;i<N;i++){
        printf("\nveillez entrez la valeur de la case %d : \n", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nvoici votre tableau : \n");

    for(i=0;i<N;i++){
       printf(" %d | ", T[i]);
    }

    int val;

    printf("\nveillez entrez la valeru que vous voulez suprimmer : ");
    scanf("%d", &val);

    for(i=0;i<N;i++){
        
        if(T[i]==val){
            for(j=i;j<N-1;j++){
                T[j]=T[j+1];
            }
            N--;
            i--;
        }
    }

    printf("\nVoici votre tableau apres la supression de la valeur : %d\n", val);

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
  }

  void exo87(){

    int N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : \n");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    int *p = T;

    printf("\nRemplissage du tableau : \n");

    for(p=T;p<T+N;p++){
        printf("\nveillez netrez la valeur de la case %d : \n", p-T+1);
        scanf("%d", p);
    }

    printf("\nVoici votre tableau : \n");
    for(p=T;p<T-N;p++){
        printf(" %d | ", *p);
    }

   int *p2;

   for(p=T,p2=T + (N-1); p<p2 ; p++ ,p2--){
       int temp = *p;
       *p = *p2;
       *p2 = temp;
   }
printf("\nVoici votre tableau inverser : \n");
   for(p=T;p<T+N;p++){
    printf(" %d | ", *p);
   }
  }

  int exotabp(){

    int N;

    do{
        printf("\nveillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    int *p = T;

    printf("\nRemplissage du tableau : ");

    for(p=T;p<T+N;p++){
        printf("\nVeillez entrez lma vcaleur de la case %d : ", p-T+1);
        scanf("%d", p);
    }

    printf("\nVoici votre tableau : ");

    for(p=T;p<T+N;p++){
        printf(" %d | ", *p);
    }

   int val;

printf("\nVeillez entrez la valeur que vous voulez supprimer : ");
   scanf("%d", &val);

   int *p2 = T;
   for(p=T;p<T+N;p++){
    *p2 = *p;
    if(*p2 != val){
        p2++;
    }
   }

   N = p2 - T;
    printf("\nVoici votre tableau apres avoir supprimer %d : \n", val) ;
   for(p=T;p<T+N;p++){
       printf(" %d | ", *p);
       }

       return 0;


  }

  void invp(){

    int N;

    do{
        printf("\nVeillez netrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    int *p = T;

    printf("\nRemplissage de votre tableau : ");

    for(p=T;p<T+N;p++){
        printf("\nVeillez entrez la valeru de la case %d : ", p-T+1);
        scanf("%d", p);
    }

    printf("\nVoici votre tableau : ");
    for(p=T;p<T+N;p++){
        printf(" %d | ", *p);
    }
    p = T;
    int *p2 = T + (N-1);

    while(p<p2){
        int temp = *p;
        *p = *p2;
        *p2 = temp;
        p++;
        p2--;
    }

    printf("\nVoici votre tableau inverse : ");
    for(p=T;p<T+N;p++){
        printf(" %d | ", *p);
    }

  }

  void fusio(){

    int M,N;

    do{
        printf("\nVeillez entrez la taille du tableau A : ");
        scanf("%d", &N);
    }while(N<=0);

    do{
        printf("\nVeillez entrez la taille de tableau B : ");
        scanf("%d", &M);
    }while(M<=0);

    int A[N], B[M];
    int *pA = A;
    int *pB = B;

    printf("\nRemplissage tableau A : ");
    for(pA = A; pA<A + N;pA++){
        printf("\nVeillez entrez la valeur de la case %d : ", pA - A + 1);
        scanf("%d", pA);
    }

    printf("\nVoici votre tableau A : ");
    for(pA = A;pA<A+N;pA++){
        printf(" %d | ", *pA);
    }
    printf("\nRemplissage du tableau B : ");
    for(pB = B;pB<B+M;pB ++){
        printf("\nVeillez entrez la valeur de la case %d : ");
        scanf("%d", pB);


    }

    printf("\nVoici votre tableau B : ");
    for(pB = B;pB<B+M;pB++){
        printf(" %d | ", *pB);
    }

    printf("\nFusinnage des deux tableau : ");
    for(pB = B,pA = A + N;pB<M+B;pB++,pA++){
           *pA = *pB;
           N++;
    }

    printf("\nVoici votre tableau fusinnais : \n");
    for(pA = A;pA<A+N;pA++){
        printf(" %d | ", *pA);
    }

  }
int main(){
   
   fusio();

    
   return 0;
}