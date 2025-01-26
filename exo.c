#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void exo1(){

    char c[10];

    printf("\nVeillez entrez le contenu de la chaine : \n");
    gets(c);
    puts(c);

}

void exo2(){

    char m1[10],m2[10];
    int i,n;
    n=0;

    printf("\nVeillez entrez la valeur de la premiere chaine : \n");
    gets(m1);

    printf("\nVeillez entrez la valeur de la deuxieme chaine : \n");
    gets(m2);

    printf("\nLa premiere chaine est : ");puts(m1);
    printf("\nLa deuxieme chaine est : ");puts(m2);
    if(strlen(m1)==strlen(m2)){
        for(i=0;i<strlen(m1);i++){
           if(m1[i]!=m2[i]){
            n++;
           }
        }

        printf("\nLa taille de hamming entre les deux chaine est : %d", n);
    }else{
        printf("\nLes deux chaine n'on pas la meme taile");
   }
}

void exo11(){

    char c[20];

    printf("\nVeillez entrez votre nom et prenom : ");
    gets(c);
    printf("\nVotre nom complet est : ");
    puts(c);

    
}

void exo22(){

    char c1[20],c2[20];
    int i;
  int d = 0;

    printf("\nVeillez entrez le premier mot : ");
    gets(c1);
    printf("\nVeillez entrez le deuxieme mot : ");
    gets(c2);
  
    if(strlen(c1)==strlen(c2)){
        for(i=0;i<strlen(c1);i++){
         if(c1[i]!=c2[i]){
            d++;
         }
        }
        printf("\nLa distance de haming entre %s et %s est : %d", c1, c2, d);
    }else{
        printf("\nLes deux mot %s et %s n'ont meme pas le meme nombre de caracteres",c1 ,c2);
    }

}

int exo3(char c[20]){

    int i = 0;
   
    
    while(c[i]!='\0'){
       i++;
    }

    printf("\nLa longuer de votre chaine est : %d", i);

    return(i);
}

void exo111(){

    char c[20];
    
    printf("\nVeillez entrez la chaine : ");
    gets(c);
    printf("\nVotre chaine est : ");puts(c);
}

void exo222(){

 

    char c1[20],c2[20];

    printf("\nVeillez entrez la chaine 1 : ");
    gets(c1);

    printf("\nVeillez entrez la deuxieme chaine : ");
    gets(c2);
int i;
int d = 0;
    if(strlen(c1)==strlen(c2)){
        for(i=0;i<strlen(c1);i++){
            if(c1[i]!=c2[i]){
              d++;
            }
        }
        printf("\nLa distance de haming entre %s et %s est : %d", c1, c2, d);
         
            }else{
                printf("\nNous ne pouvons pas calculer la distance de haming");
            }
}

void exo33(){

    int i;
    char c1[20];

    printf("\nVeillez entrez votre chaine de caaracter : ");
    gets(c1);

    int l = 0;
    for(i=0;c1[i]!='\0';i++){
       l++;
    }

    if(l==0){
        printf("\nErreur de saisie");
    }else{
        printf("\nLa longeur de votre chaine est : %d", l);
    }
}

void exo4(){

    int i;

    char c[20];
    int T[20];

    

 

    printf("\nVeuillez saisir votre chaine : ");
    gets(c);

    int j;
    int N=0;

    for(i=0;i<20;i++){
        T[i]=-1;
    }

    for(i=0;c[i]!='\0';i++){
        int cpt = 1;
        for(j=i+1;c[j]!='\0';j++){
            if(c[i]==c[j]){
                   cpt++;
                   T[j]==0;
            }
        }
        if(T[i]!=0){
        T[i]=cpt;

        }
        N++;
    }

        int max = T[0];
        int mi = 0;

   

    for(i=1;i<N;i++){
        if(max<T[i]){
            max = T[i];
            mi = i;
        }
        
    }

    printf("\nVoici le tableau des repitions : \n");
    for(i=0;i<N;i++){

        printf(" %d | ", T[i]);
    }

    if(max==1){
        printf("\nIl n'ya aucun caractere qui se repete");
    }else {
        printf("\nLe caractere qui se repete le plus est : %c et il se repete %d fois", c[mi], max);
    }

}

int main(){

    exo4();

    return 0;
}
