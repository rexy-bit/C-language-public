#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int exo1(){

    int i,N;
    do{
        printf("\nVEillez entrez le taille du tableau : ");
        scanf("%d", &N);
    }while(N<0);

    int tab[N];
    tab[0] = 1;
    for(i=1;i<N;i++){
       tab[i]= tab[i-1]*2;
    }

    printf("\n ");
    printf("\nLes valeurs du tableau sont : ");

    for(i=0;i<N;i++){
        printf("%d | ", tab[i]);
    }


    printf("\n\n");
    return 0;

    
}

int exo2(){
    int i,N;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<0);

    int tab[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &tab[i]);
    }

    printf("\n");
    for(i=0;i<N;i++){
        if(i%2 == 0){
            printf("%d | ", tab[i]);
        }

    }
    return 0;
}

int exo3(){

    int i,N,s;

    do{
        printf("\nVeillez entrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

    s=0;

    int tab[N];

    for(i=0;i<N;i++){
       printf("\nVeillez saisir la valeur de la case %d : ", i);
       scanf("%d", &tab[i]);
    }

      printf("\n\n");

       for(i=0;i<N;i++){
          s = s + tab[i];
       }

       printf("\nThe sum is : %d", s);
       printf("\n*****************");

       return 0;
}

int exo4(){

    int i,N;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<0);
     printf("\n");
    int max;

    int tab[N];

    for(i=0;i<N;i++){
        printf("\nVeillez saisir la valeur de la case  %d : ", i);
        scanf("%d", &tab[i]);
    }
    
    max = tab[0];

    for(i=0;i<N;i++){
        if(max<tab[i]){
            max = tab[i];
        }
    }
    printf("\n");

    printf("\nLa maximum du tableau est : %d", max);

    return 0;

}

int exo5(){

    int i,N,m,p=0;
do{
    printf("\nVeillez entrez la taille du vecteur : ");
    scanf("%d", &N);
}while(N<0);

    int tab[N];

    for(i=0;i<N;i++){
        printf("\nVeillez saisir la valeur de la case %d : ", i);
        scanf("%d", &tab[i]);
    }
   printf("\n");
    for(i=0;i<N;i++){
        printf(" %d || ", tab[i]);
    }
printf("\n");
    printf("\nVeillez entrez un entier m a rechercher : ");
    scanf("%d", &m);


    for(i=0;i<N;i++){
        if(m==tab[i]){
            p = 1;
            break;
        }
    }
    printf("\n");
    if(p==1){
        printf("\n%d existe dans le tableau", m);
         
    }else{
        printf("\n%d n'existe pas dans le tableau",m);
    }

    return 0;

}

int exo6(){

    int i,N,j,p=0;

    do{
        printf("\nVeillez entrez la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

    int tab[N];

    for(i=0;i<N;i++){
        printf("\nVeillez saisir la valeur %d : ", i);
        scanf("%d", &tab[i]);
    }
    printf("\n");
    printf("les valeurs du tableau sont : ");

    for(i=0;i<N;i++){
        printf("%d | ", tab[i]);
    }
    printf("\n");
    int n;
    printf("\nVeillez entrez la valeur a supprimer : ");
    scanf("%d", &n);
     
    for(i=0;i<N;i++)
{
    if(tab[i] == n){
      p = 1;
      for(j=i;j<N-1;j++){
        tab[j] = tab[j+1];

      }
      N--;
      i--;
    }

}

if(p==1){
    printf("\nLa nouveau vecteur apres avoir supprimer %d est : ",n);
    for(i=0;i<N;i++){
        printf("%d | ", tab[i]);
    }

}else{
    printf("\n%d n'existe meme pas dans le vecteur", n);
}
return 0;
}

int main(){
   //exo1();

   //exo2();
   exo6();

   return 0;

}