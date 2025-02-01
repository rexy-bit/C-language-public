#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

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

void exo5(){

    int i,j;

    char c[20];

    printf("\nVeillez entrez votre chaine de caractere : ");
    gets(c);
    printf("\nVotre chaine de caractere inverser est : ");puts(c);

    i=0;
    j = strlen(c)-1;
    char temp;

    while(i<j){
        temp = c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;

    }

    printf("\nVotre chaine de caractere inverser est : ");
    puts(c);
}

void distance(){
    char c1[20],c2[20];

    printf("\nVeilez entrez votre premiere chaine : ");
    gets(c1);

    printf("\nVeillez entrez votre deuxieme chaine : ");
    gets(c2);

    int d = 0;
    int i;
    if(strlen(c1) == strlen(c2)){
        for(i=0;i<strlen(c1);i++){
            if(c1[i]!= c2[i]){
                d++;
            }
        }
        printf("\nLa distance de haming entre %s et %s est : %d", c1,c2,d);
    }else{
        printf("\nNous ne pouvons pas calculer la distance de haming car les deux chaine n'ont pas la meme taille");
    }
}

void pluscar(){

    char c[20];
    int T[20];

    printf("\nVeillez entrez votre chaine : ");
    gets(c);

    int i,j,cpt = 0;

    for(i=0;i<strlen(c);i++){
        T[i]=-1;
            }


     for(i=0;i<strlen(c);i++){
        cpt = 1;
        for(j=i+1;j<strlen(c);j++){
            if(c[i]==c[j]){
                cpt++;
                T[j]=0;
            }
        }

        if(T[i]!=0){
            T[i]=cpt;
        }
     }

     int max,pi;

     max = T[0];
     pi = 0;

     for(i=1;i<strlen(c);i++){
        if(max<T[i]){
            max = T[i];
            pi = i;
        }
     }
    if(max != 1){
      printf("\nle caractere qui se repete le plus est %c et il se repete %d fois", c[pi], max);
    }else{
        printf("\nIl n'ya aucun caractere qui se repete");
    }

     
}

void exo95(){

    char c[20];

    printf("\nVeillez entrez une chaine de caractere : ");
    gets(c);
    printf("\nVotre chiane est : %s", c);
    /* 

    int i,j;
    i=0;
    j=strlen(c)-1;

    char temp;

    while(i<j){
        temp = c[i];
        c[i] = c[j];
        c[j]= temp;
        i++;
        j--;
    }
 
    printf("\nVotre chaine caractere inerser est : ");puts(c);
    */

   strrev(c);
   printf("\nVotre chiane de caractere inverser est : %s", c);
}

void exo96(){

    char c1[20], c2[20];

    printf("\nveilez entrez votre chiane de caractere principale : ");
    gets(c1);
    printf("\nVotre chiane c1 est : %s", c1);

     strcpy(c2,c1);
     printf("\nVotre chaine c2 est : %s", c2);
     strrev(c2);
     printf("\nVotre chaine c2 inverser est : %s", c2);

 bool p = true;
  int i=0;
   while(p==true && i<strlen(c1)){
   if(c1[i]!=c2[i]){
      p = false;
   }
   i++;
   }

   if(p==true){
    printf("\nVotre chaine %s est palindrome", c1);
   }else{
    printf("nVotre chaine %s n'est pas palindrome", c1);
   }
}

void exo97(){

    char c1[40], c2[20];

    printf("\nVeillez entrez la chaine c1 : ");
    gets(c1);
    printf("\nVeillez entrez la chiane c2 :");
    gets(c2);

    printf("\nVotre premiere chaine est %s ", c1);
    printf("\nVotre deuxieme chaine est %s", c2);

    char *p1 = c1;
    char *p2 = c2;

    for(p1 = c1 + strlen(c1),p2 = c2;p1<c1 + (strlen(c1) + strlen(c2));p1++,p2++){
        *p1 = *p2;
    }

    printf("\nLa concatenation des deux chaines c1 et c2 est : %s", c1);



}
 
 int exoun(){
    char c[20];

    printf("\nVeillez Entrez votre chaine de caractere : ");
    gets(c);

    printf("\nVoici la chaine de caractere : %s", c);

    return 0;
 }

 void exodeux(){

    char c1[30];
    char c2[30];

    printf("\nVeillez entrez la valeur de votre chaine de caractere : ");
    gets(c1);

    printf("\nVeillez Entrez la deuxieme de caractere : ");
    gets(c2);

    int i;
    int d = 0;

    if(strlen(c1)==strlen(c2)){
        for(i=0;i<strlen(c1);i++){
            if(c1[i]!=c2[i]){
                  d++;
            }

        }
        printf("\nLa distance de haming est de %d", d);
    }else{
        printf("\nIl est impossible de calculer la distance de haming dans ce cas car les deux valeur n'ont pas la meme taille de caractere ");
    }
 }

 void exotrois(){

    char c[30];

    printf("\nVeillez Entrez la valeur de c : ");
    gets(c);

    printf("\nLa longeur de votre chaine est de : %d", strlen(c));
 }

 void exoquatro(){

    char c[30];

    printf("\nVeillez Entrez la valeur de votre chaine : ");
    gets(c);

    int nombreOc[30];

    int i;

    for(i=0;i<strlen(c);i++){
        nombreOc[i]= -1;
    }

    int cpt = 0;
    int j;
    for(i=0;i<strlen(c);i++){
        cpt = 1;
        for(j=i+1;j<strlen(c);j++){
            if(c[i]==c[j]){
                cpt++;
                nombreOc[j]=0;
            }
        }
        if(nombreOc[i]!=0){
            nombreOc[i]=cpt;
        }
    }

    int posMax = 0;
    int max = nombreOc[0];

    for(i=1;i<strlen(c);i++){
        if(max<nombreOc[i]){
            max = nombreOc[i];
            posMax = i;
        }
    }

    if(max != 1){
        printf("\nLe caractere qui se repete le plus est '%c' et le nombre d'occurence est %d", c[posMax], nombreOc[posMax]);
    }else{
        printf("\nIl n'ya aucun caractere qui se repete dans la chaine");
    }
 }

 int exofive(){

    char c[20];
    char inv[20];

    printf("\nVeillez Entrez la valeur de la premiere chaine : ");
    gets(c);

    printf("\nVotre chaine de caratere est : %s", c);

    strcpy(inv , c);
    strrev(inv);

    printf("\nVotre chaine de caractere inverser est : %s", inv);
 }

 void exosix(){

    char c[20];
    char inv[20];

    printf("\nVeillez entrez la valeur de la premiere chaine  : ");
    gets(c);
    printf("\nVotre chaine de caractere est : %s", c);

    strcpy(inv , c);
    strrev(inv);
    printf("\nVotre chaine de caractere inverser est : %s", inv);

    if(strcmp(inv , c)==0){
        printf("\nLa chaine %s est palindrome", c);
    }else{
        printf("\nLa chaine de caractere %s n'est pas palindrome", c);
    }
 }

 void exosept(){

    char A[20], B[20];

    printf("\nVeillez Entrez la valeur de A : ");
    gets(A);

    printf("\nVeillez Entrez la valeur de B : ");
    gets(B);

    printf("\nVotre chaine A est : %s", A);
    printf("\nVotre Chaine B est : %s", B);

    char *PA = A;
    char *PB = B;

    for(PA = A + strlen(A),PB = B;PA<A + (strlen(B) + strlen(B));PA++,PB++){
        *PA = *PB;

    }
    printf("\nLa concatenation des deux chaine A et B est : %s", A);
 }

   void function8(int N, char * c, char val){
     int i,j;

     for(i=0;i<N;i++){
        if(c[i]==val){
            for(j=i;j<N-1;j++){
                c[j]=c[j+1];
            }
            N--;
            i--;
        }

     }

     printf("\nVotre chaine de caractere apres avoir supprimer la valeur '%c' est : %s", val, c);
   }


   
 void exohuit(){

    char c[20];

    printf("\nVeillez Entrez votre chaine de caractere : ");
    gets(c);

    printf("\nVoici votre chaine de caractere : %s", c);

    int N = strlen(c);

    char val;
    printf("\nVeillez entrez le caractere que vous voulez supprimer : ");
    scanf("%c", &val);

    function8(N,c,val);
 }

 void caracterePlus(){

    char c[20];

    printf("\nVeillez Entrez votre chaine : ");
    gets(c);

    printf("\nVoici Votre chaine : %s", c);
    int cpt = 0;
    int i;
    int T[20];

    for(i=0;i<strlen(c);i++){
        T[i] = -1;
    }
  int j;
    for(i=0;i<strlen(c);i++){
      cpt = 1;
      for(j=i+1;j<strlen(c);j++){
        if(c[i]==c[j]){
            cpt++;
            T[j]=0;
        }
      }

      if(T[i]!=0){
        T[i]=cpt;
      }

    }

    int max = T[0];
    int posMax = 0;
    for(i=0;i<strlen(c);i++){
        if(max<T[i]){
            max = T[i];
            posMax = i;
        }
    }

    printf("\nLe caractere qui se repete le plus est %c et le nombre de repetitions est de %d", c[posMax], T[posMax]);
 }

 void inverse4(){

    char c[20];

    printf("\nVeillezEntrez votre chaine : ");
    gets(c);

    printf("\nVoici votre chaine : %s", c);

    char inv[20];

    strcpy(inv , c);
    strrev(inv);
     
     
     if(strcmp(inv, c)==0){
        printf("\nVotre chaine %s est palindrome", c);
     }else{
        printf("\nVotre chiane %s n'est pas palindrome", c);
     }



 }

 void concatenation(){
    char A[20];
    char B[20];

    char *PA = A;
    char *PB = B;
    printf("\nVeillez Entrez la valeur de A : ");
    gets(A);
   
    printf("\nVeillez Entrez la valeur de B : ");
    gets(B);

    printf("\nVoici votre chaine A : %s", A);
    printf("\nVoici votre chaine B : %s", B);

    for(PA = A + strlen(A),PB = B;PA < A + (strlen(A) + strlen(B));PA++,PB++){
        *PA = *PB;
    }

    printf("\nLa concatenation des deux chaine A et B est : %s", A);

 }

 void supp(){
    char c[20];
    char val;

    printf("\nVeillez Entrez votre chaine : ");
    gets(c);

    printf("\nVoici votre chaine : %s", c);
    printf("\nVellez Entrez le caractere que vous voulez supprimer : ");
    scanf("%c", &val);
   
     int i,j;
     int N = strlen(c);
     for(i=0;i<N;i++){
        if(c[i]==val){
            for(j=i;j<N;j++){
                c[j]=c[j+1];
            }
            N--;
        i--;
        }
        
     }

     printf("\nVotre chaine de caractere apres la supression de %c est : %s", val, c);

 }

 void conca(){

    char A[20], B[20];

    int *PA = A;
    int *PB = B;

    printf("\nVeillez Entrez votre premiere chaine de caractere : ");
    gets(A);

    printf("\nVeilez ENtrez votre deuxieme chaine de caractere : ");
    gets(B);

    printf("\nVoici votre premiere chaine : %s\nVoici votre deuxieme chaine : %s", A, B);

    for(PA = A + strlen(A),PB = B;PA < A + (strlen(A) + strlen(B)); PA++,PB++ ){
        *PA = *PB;
    }

    printf("\nVotre chaine de caractere concatiner est : %s", A);

 }


 void spressionCar(char *c, char val){
      int i,j;

      for(i=0;i<strlen(c);i++){
          if(c[i]==val){
              for(j=i;j<strlen(c);j++){
                  c[j]=c[j+1];
              }
              i--;
          }
      }

 }
 void suppr(){

    char c[20];

    printf("\nVeillez entrez votre chaine : ");
    gets(c);

    char val;

    printf("\nVotre chaine de caractere est : %s", c);
    printf("\nVeillez Entrez un caractere a supprimer : ");
    scanf("%c", &val);
    getchar();
   
    spressionCar(c, val);
    printf("\nVotre chaine de carcatere apres la supression de %c est : %s", val, c);
    
 }

 void exo99(){
     char T[]="Informatique";
     printf("%s", T+5);
 }

 void exo992(){

    char *c1 = "Quiz";
    char c2[10]="Quiz";

    printf("%d\n", sizeof(c1));
    printf("%d\n", sizeof(c2));
 }

 void exo100(){

    char Ali[]="ACTGCATAAGCTGCCAAATACGGTA";
    char AMINE[]="ACTTGGCGACGTAGGTTCAAACGTACGTA";
    char Mehdi[]="ACGTACGTTACAGGCTACGA";
    char Sara[]="ACGTACGTAGACAGATA";

    char coupable[] = "CATA";

    if(strstr(Ali, coupable)!='\0'){
        printf("\nLe coupable est ali");
    }else if(strstr(AMINE, coupable)!='\0'){
        printf("\nle coupable est amine");
    }else if(strstr(Mehdi, coupable)!='\0'){
        printf("\nle coupable est mehdi");
    }else if(strstr(Sara, coupable)!='\0'){
        printf("\nLe coupable est sara");
    }else{
        printf("\nle coupable n'est parmi les suspect");
    }
 }
int main(){
    
    exo100();

    return 0;
}
