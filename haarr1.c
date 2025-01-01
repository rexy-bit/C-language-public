#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int exo49(){

    int i;

    int T[10];

    for(i=0;i<10;i++){
        T[i]=0;
    }

    for(i=0;i<10;i++){
        printf(" %d | ", T[i]);
    }


    return 0;
}

int exo50(){

    char T[6];
    int i;

    T[0]= 'A';
     T[1]= 'E';
      T[2]= 'I';
      T[3]='O';
       T[4]='U';
        T[5]='Y';

    for(i=0;i<6;i++){
        printf(" %c | ", T[i]);
    }
        return 0;

}

int exo51(){

    int i;
    double T[10];
    double S,P,moy;

   for(i=0;i<10;i++){
    printf("\nEnter la valeur de la case %d : ", i+1);
    scanf("%lf", &T[i]);
   }
    S = 0;
    P = 1;
    moy = 0;

    for(i=0;i<10;i++){
       S += T[i];
       P *= T[i];
    }

    moy = S/10;

    printf("\nLa somme des valeurs est : %.2lf", S);
    printf("\nLe produits des valeurs est : %.2lf", P);
    printf("\nLa moyenne des valeurs est : %.2lf", moy);

    return 0;
}

int exo512(){

    int i;

    double max,min,moy, S;
    double T[10];
    i = 0;
    printf("\nVEillez entrez la valeur de la case %d : ", i);
    scanf("%lf", &T[0]);

    S = T[0];
    min = T[0];
    max = T[0];


    for(i=1;i<10;i++){

        printf("\nVEillez entre zla valeur de la case %d : ", i);
        scanf("%lf", &T[i]);

        
        

        if(min > T[i]){
            min = T[0];
        }else if(max <T[i]){
            max = T[i];
        }

        S = S + T[i];


        
}

moy = S/10;

    printf("\nLa moyenne est : %.2lf \nLe max est : %.2lf\nLe min est : %.2lf", moy,max, min);

    return 0;
}

int exo52(){

    int i;

    int T1[3], T2[3];
    int PS;

    for(i=0;i<3;i++){
        printf("\nVeillez entrez la valeur de la case %d du tableau 1 : ", i+1);
        scanf("%d", &T1[i]);

        printf("\nVeillez entrez la valeur de la case %d du tableau 2 : ", i+1);
        scanf("%d", &T2[i]);

        printf("\n-------------------------------------------------------");
    }
     PS = 0;
    for(i=0;i<3;i++){
        PS = PS + T1[i]*T2[i];

    }

    printf("\nLe produit scalaire des vecteur 1 et 2 est : %d", PS);

    return 0;
    
}

int minMax(){

    int min,max,i,N;

    do{
        printf("\nVeillez saisir la taille du vecteur : ");
        scanf("%d", &N);
    }while(N<0);

    int T[N];

    printf("\nVeillez entrez la valeur de la case 1 : ");
    scanf("%d", &T[0]);

    min = T[0];
    max = T[0];

    for(i=1;i<N;i++){

        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
        if(T[i]<min){
            min = T[i];
        }else if(T[i]>max){
            max = T[i];
        }

    }
    printf("\n\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\n\nLe minimum du tableau est : %d\nLe maximum du tableau est : %d", min,max);

    return 0;
}

int recherche(){
    int i,val;

    int T[10];
    bool trouve = false;
    bool p = 1;

    for(i=0;i<10;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }
    
    printf("\n\n");
    for(i=0;i<10;i++){
        printf(" %d | ", T[i]);
    }

   while(p){
    trouve = false;
    printf("\n\nVeillez entrez la valeur a rechercher : ");
    scanf("%d", &val);
    i=0;
    while(i<10 && trouve == false){

       if(T[i]==val){
        trouve = true;
       }else if(T[i]!=val){
        trouve = false;
       }
       
      i++;
    }
    
    if(trouve == true){
        printf("\n%d existe dans me tableau", val);
    }else{
        printf("\n%d n'existe pas dans le tableau", val);
    }

    printf("\nTapez 1 pour continuer et tapez 0 pour quitter : ");
    scanf("%d", &p);

   }

    return 0;
}

int oc(){

    int i,N,cpt,val;

    do{
        printf("\nEntrez le nombre de cases : ");
        scanf("%d", &N);

    }while(N<0);
    
    int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez saisir la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\n\n");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\nVeillez entrez la valeur a rechercher : ");
    scanf("%d", &val);

    cpt =0;

    for(i=0;i<N;i++){

        if(T[i]==val){
            cpt++;
        }
    }

    printf("\n%d se repete %d fois", val, cpt);

    return 0;
}


int exo57(){

    int i;
    float moy,S;
    float T[10];
  
  S = 0;
  moy = 0;
    
    for(i=0;i<10;i++){
        printf("\nVeillez entrez la note de l'eleve %d : ", i+1);
        scanf("%f", &T[i]);
        S = S + T[i];
    }
        moy = S/10;

    printf("\nVoici les notes : ");
    printf("\n");
    for(i=0;i<10;i++){
        printf(" %.2f | ", T[i]);
    }




    printf("\nLa moyenne des notes des eleves est : %.2f", moy);

    printf("\nLes notes superieurs a la moyenne sont : ");
    for(i=0;i<10;i++){
      if(T[i]>moy){
        printf(" %.3f | ",T[i]);
      }
    }

    return 0;
}

int exo58(){

    int i;
    double T[20];

    T[0] = 1000;

    for(i=1;i<20;i++){
        T[i]=T[i-1] + (T[i-1]*2)/100;
    }

    for(i=0;i<20;i++){
        printf("\nLe comte bancaire a %d ans contient %.2f dh", i+1, T[i]);
    }

    return 0;
}

int exo59(){

    int i;

    int TE[10];

    int TS[10];
    

    for(i=0;i<10;i++){
        printf("\nEntrez la valeur de la case %d : ", i+1);
        scanf("%d", &TE[i]);
    }

    printf("\nLe tableau est : ");
    printf("\n");

    for(i=0;i<10;i++){
        printf(" %d | ", TE[i]);
    }

    printf("\n\n");

    printf("\nLe tableau inverser est : ");
    printf("\n");

    for(i=9;i>=0;i--){
        TS[9-i]=TE[i];
    }

    for(i=0;i<10;i++){
        printf("%d | ", TS[i]);
    }

    return 0;
}

int exoinv(){

    int i,j,temp,N;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\n\n");
    printf("\nLe tableau est : ");
    printf("\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    j=N-1;
    i=0;

    while(i<j){
      temp =  T[i];
      T[i]= T[j];
      T[j]=temp;

      i=i+1;
      j--;
    }

    printf("\n");
    printf("\nLe tableau inverser est : ");
    printf("\n");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;


}

int exo60(){

    int i,N;

   do{
      printf("\nVeillez entrez l ataille du tableau : ");
      scanf("%d", &N);
   }while(N<=0);

   int T[N];

   T[0]=2;
   i = 0;

   for(i=0;i<N;i++){
    // for(j=0;i<)
   }

   return 0;



}

int exo63(){

    int i,N,j;
    int val, temp;

    do{
        printf("\nveillez entrez la taille du tableau : ");
        scanf("%d", &N);

    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nveillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        printf(" [ %d ] ", T[i]);
    }

    printf("\nVeillez entrez la valeur d=que vous voulez supprimer : ");
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
    printf("\nLe tableau apres avoir supprimer %d est : ", val);
    for(i=0;i<N;i++){
        printf(" [ %d ] ", T[i]);
    }

    return 0;
    
}

    int sup0(){

        int i,N,j,temp;

        do{
            printf("\nVeillez entrez la taille du tableau : ");
            scanf("%d", &N);
        }while(N<=0);

        int  T[N];

        for(i=0;i<N;i++){
            printf("\nVeillez entrez la valeur de la case %d : ");
            scanf("%d", &T[i]);
        }

        printf("\nVotre tableau : ");
        printf("\n");

        for(i=0;i<N;i++){
            printf(" [ %d ] ", T[i]);
        }

        for(i=0;i<N;i++){
           if(T[i]==0){
             for(j=i;j<N;j++){
            temp=T[i];
            T[i]=T[j];
            T[j]=temp;
             }
             N--;
             i--;
           }
        }

        printf("\nLe tableau apres la suppression des zeros est : ");

        for(i=0;i<N;i++){

            printf(" [ %d ] ", T[i]);
        }

        return 0;
    }

  int add(){

    int N,i,j;
    int val;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
               printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }


    printf("\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

   int ind;

    printf("\nVeillez entrez la variable que vous voulez rajouer a votre tableau : ");
    scanf("%d", &val);

    printf("\nDonnez l'indice de la case ou vous voulez l'inserer : ");
    scanf("%d", &ind);


    if(ind<0 && ind >N-1){
        printf("\nL'indice n'existe pas dans le tableau");
    }else{
        for(i=N+1;i>=ind;i--){
            T[i]=T[i-1];
        }
        T[ind-1]=val;
        N = N +1;
    }

    printf("\nLe nouveau tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;


  }

int vecteur(){

    int i,j,N,K;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];
    int T1[N];
    int T2[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case  %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre tableau : ");

    printf("\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    j=0;
    K=0;
    for(i=0;i<N;i++){
        if(T[i]%2==0){
            T1[j]=T[i];
            j++;
        }else{
            T2[K]=T[i];
            K++;
        }
    }


    printf("\n\nLe tabmleau des paires est : \n");
    for(i=0;i<j;i++){
        printf(" %d | ", T1[i]);
    }

    printf("\nLe tableau des impaires est : \n");
    for(i=0;i<K;i++){
        printf(" %d | ", T2[i]);
    }


    return 0;
}

int trii(){
    int i,j,N,M;

    do{
        printf("\nVeillez entrez la taille du tableau 1 : \n");
        scanf("%d", &N);
    }while(N<=0);

    int T1[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la taille de la case %d : ", i+1);
        scanf("%d", &T1[i]);
    }



    do{
        printf("\n\nveillez entrez la taille du tableau : \n");
        scanf("%d", &M);
    }while(M<=0);
    
    int T2[M];

    for(i=0;i<M;i++){
        //printf("\n\nVeillez entrez la valeur de la case : \n", i+1);
       // scanf("%d", &T2[i]);
    }

        printf("\nVoici votre premier tableau : \n");
    for(i=0;i<N;i++){
        printf(" %d | ", T1[i]);
    }

    printf("\nVoici votre deuxieme tableau : \n");
    for(i=0;i<M;i++){
        printf(" %d | ", T2[i]);
    }
    
    //remplissage du vecteur 3 : 

    int T3[N+M];
    int K = 0;
    for(i=0;i<N;i++){
        T3[K]=T1[i];
        K++;
    }
    
    for(i=0;i<M;i++){
        T3[K]=T2[i];
        K++;
    }
 printf("\nVoici votre troisieme tableau ava,t le tri : \n");
    for(i=0;i<K;i++){
        printf(" %d | ", T3[i]);
    }
  int l;
    for(i=0;i<K-1;i++){
       for(j=i+1;j<K;j++){
        if(T3[j]==T3[i]){
           for(l=j;l<K-1;l++){
             T3[l]=T3[l+1];
           }
           K--;
           j--;
        }
       }
    }

  int temp;
    for(i=0;i<K-1;i++){
        for(j=i+1;j<K;j++){
            if(T3[i]>T3[j]){
                temp=T3[i];
                T3[i]=T3[j];
                T3[j]=temp;
            }
        }
    }

    printf("\n\nVoici votre tableau apres toutes les modifications : \n");
    for(i=0;i<K;i++){
        printf(" %d | ", T3[i]);
    }

   return 0;
    
}



int paires(){
    int i,j,N;

    do{
        printf("\nVeillez entrez la taille du tableau : \n");
        scanf("%d", &N);
    }while(N<=0);


    int T[N];

   for(i=0;i<N;i++){

    printf("\nVeillez entrez la valuer de la case %d : \n", i+1);
    scanf("%d", &T[i]);
   }
    
    int Temp;
   for(i=0;i<N;i++){
      for(j=i+1;j<N;j++){
        if((T[i]%2!=0)&&(T[j]%2==0)){
           Temp = T[i];
           T[i] = T[j];
           T[j] = Temp;
        }
      }
   }

   printf("\n\nVoici votre tableau : \n");
   for(i=0;i<N;i++){
      printf(" %d | ", T[i]);
   }

   return 0;
}

int algoinser(){

    int i,j,N;


do{
    printf("\nVeillez entrez la taille de votre tableau : ");
    scanf("%d", &N);
}while(N<=0);

  int T[N];
for(i=0;i<N;i++){
    printf("\nVeillez entrez la valeur de la case %d : ", i+1);
    scanf("%d", &T[i]);
}

for(i=0;i<N;i++){
    printf(" %d | ", T[i]);
}
   
   int val;
   int ind;

   printf("\n\nVeillez entrez la valeur que vous voulez inserer dans le tableau : ");
   scanf("%d", &val);

   printf("\nVeillez entrez le numero de la case : ");
   scanf("%d", &ind);

   if(ind>=0 && ind <N){
      for(i=N+1;i>=ind;i--){
         T[i]=T[i-1];
      }
      T[ind-1]=val;
      N++;
      

   }else{
      printf("\nL'indice n'existe pas dans le tableau");
   }


   printf("\nLe nouveu tableau apres avoir inserer %d dans la case %d est : ", val,ind);

   for(i=0;i<N;i++){
    printf(" %d | ", T[i]);
   }

   return 0;


}

int supp(){

    int i,N,j;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\n\nVoici votre tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
 
    int val;
    int Temp;
    bool p = 0;

    printf("\nVeillez entrez la valeur que vous voulez supprimer : ");
    scanf("%d", &val);
    for(i=0;i<N;i++){
        if(T[i]==val){
            p=1;

            for(j=i;j<N-1;j++){
              T[j]=T[j+1];
            }
            N--;
            i--;
        }
    }

    if(p==1){
        printf("\nVotre nouveau tableau est : ");
        for(i=0;i<N;i++){
            printf(" %d | ", T[i]);
        }
        printf("\n%d a etait suprimmer", val);
    }else{
        printf("\n\n%d n'exsite meme pas dans le tableau : ");
    }

    return 0;

    

}

int ocpos(){

    int i,j,N;

   do{

     
    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &N);
   }while(N<=0);

   int T[N];

   for(i=0;i<N;i++){
    printf("\nVeillez entrez la valeur de la case %d : ", i+1);
    scanf("%d",&T[i]);
   }

   for(i=0;i<N;i++){
    printf(" %d | ", T[i]);
   }

   int val;
   printf("\nVeillez entrez un nombre a rechercher : ");
   scanf("%d", &val);

   int pos[N];
   int K = 0;
 

   for(i=0;i<N;i++){
      if(T[i]==val){
         pos[K]=i+1;
         K++;
        
      }
   }

   if(K==0){
    printf("\n%d n'existe pas dans le tabelau : ", val);
   }else{
     printf("\n%d se repete %d fois dans le tabelau : ", val, K);
     printf("\n\nLes positions d'apparitions de %d sont : ", val);

     for(i=0;i<K;i++){
        printf(" %d | ", pos[i]);
     }

   }

   return 0;
}

int paireimpaires(){

    int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau: ");
        scanf("%d", &N);
    }while(N<=0);
     
     int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre magnifique tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    int T1[N];
    int T2[N];
    int k=0;
    j=0;

    for(i=0;i<N;i++){
        if(T[i]%2==0){
            T1[j]=T[i];
            j++;
        }else{
            T2[k]=T[i];
            k++;
        }
    }

    printf("\nVoici le tableau des paires : ");
    for(i=0;i<j;i++){
        printf(" %d | ", T1[i]);
    }
    

    printf("\nVoici le tableau des impaires : ");
    for(i=0;i<k;i++){
        printf(" %d | ", T2[i]);
    }
   
   return 0;

}

int max1max2(){

    int i,N,max1,max2;

    do{
        printf("\nVeillez netrez l ataille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVotre tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    max1 = T[0];
    for(i=1;i<N;i++){
        if(T[i]>max1){
            max1 = T[i];
        }
    }

    max2 = T[0];
    i=1;
    while(i<N){
        if(T[i]>max2 && T[i]!=max1){
            max2 = T[i];
        }
        i++;
    }

    printf("\nLe 1er plus grand element du tableau est : %d", max1);
    printf("\nLe 2eme plus grand element du tableau est : %d", max2);
    
    return 0;
}

int unique(){
    int i,j,N;

    do{
        printf("\nVeillez netrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entre la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    bool p;

    printf("\nVoici votre tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\n\nLes element uniques du tableau sont : ");
    for(i=0;i<N;i++){
        
        p = true;
        j=i+1;
        while(j<N && p==true){
            if(T[i]==T[j]){
                p = false;
            }else{
                j++;
            }
            
        }

        if(p==true){
            printf(" %d | ", T[i]);
        }

    }
    return 0;

}

int decr(){

    int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    int Pmin,Pmax,min,max;
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ",i+1);
        scanf("%d", &T[i]);
    }
     printf("\nVoici votre tableau : "); 
    for(i=0;i<N;i++){
          printf(" %d | ", T[i]);
    }

    min = T[0];
    max = T[0];
    Pmin = 0;
    Pmax = 0;


    for(i=0;i<N;i++){
        if(T[i]<min){
            min = T[i];
            Pmin = i;
        }else if(max<T[i]){
            max = T[i];
            Pmax = i;
        }
    }

    printf("\nLe minimum est : %d Et le maximum est : %d", min,max);
    printf("\nLa position du min est : %d la position du max est : %d", Pmin , Pmax);

    if(Pmin <Pmax){
        for(i=Pmin+1;i<Pmax;i++){
          for(j=i;j<N-1;j++){
                    T[j]=T[j+1];
          }
          
            N--;
            Pmax--;
            i--;
        }
    }else if(Pmax<Pmin){
        for(i=Pmax +1;i<Pmin;i++){
            for(j=i;j<N-1;j++){
                     T[j]=T[j+1];
            }
            
            N--;
            Pmin--;
            i--;
        }
    }

    printf("\nVotre nouveau tableau est : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}

int premier100(){
   int i,N;
   bool p = true;

   printf("\nLes nombre premier inferieurs a 100 sont : ");

   for(N=1;N<=100;N++){
      i=2;
      p=true;
      while(i<=N/2 && p == true){
        if(N%i==0){
            p = false;
        }
        i++;
      }

      if(p==true){
        printf("%d", N);
        printf("\n");
      }

   }


   return 0;
}


int minpos(){

    int i,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de l a case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoivi votre tableau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }


    int min = T[0];
    int max = T[0];

    int Pmin = 0;
    int Pmax = 0;

    for(i=1;i<N;i++){
        if(T[i]<min){
            min = T[i];
            Pmin = i;
        }else if(T[i]>max){
            max = T[i];
            Pmax=i;
        }

    }

    printf("Max = %d, Min = %d", max, min);
    printf("\nLa position du maximum est : %d, La position du minimum est : %d", Pmax, Pmin);
    int j;
    if(Pmin<Pmax){
        for(i=Pmin+1;i<Pmax;i++){
            for(j=i;j<N;j++){
                T[j]=T[j+1];
               
            }
            Pmax--;
            N--;
            i--;
        }
    }else if(Pmax<Pmin){
        for(i=Pmax+1;i<Pmin;i++){
            for(j=i;j<N;j++){
                T[j]=T[j+1];
            }
            Pmin--;
            N--;
            i--;
        }
    }

    printf("\nVotre nouveau tableau est : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}


int exoexam(){

    int  i,j,N;
    bool p;
 
    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);
    int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre vecteur : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    for(i=0;i<N;i++){
        
        j = 0;
        while(j<N){
            if(T[j]==T[i] && i!=j){
                T[j]=0;
            }
            j++;
        }
    }

    printf("\nVotre vectuer apres modification : ");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }


    return 0;
}


  
int calc(){

    double num1,num2,result;
    char op;
    int p;

  printf("\nBienvenu au programme calculatrice : ");

   do{

       printf("\nVeillez entrez votre operateur : ");
       scanf(" %c", &op);

       printf("\nVeillez entrez votre prmeier numero : ");
       scanf("%lf", &num1);

       printf("\nVeillez entrez votre deuxieme numero : ");
       scanf("%lf", &num2);

       switch(op){

        case '+':
           result = num1 + num2;
           break;

        case '-':
           result = num1 - num2;
           break;

        case '*':
           result = num1 * num2;
           break;

        case '/':
            if(num2 != 0){
                result = num1 / num2;
            }else{
                printf("\nMaths error division par zero impossible");

            }
            break;

       }

       printf("\nThe result is : %.2lf", result);

       do{
        printf("\nVoulez vous continuer ? tapez '1' pour un oui ou '0' pour un non : ");
       scanf("%d", &p);
       }while(p!=0 && p!=1);
   }while(p == 1);

   return 0;
}

int decroissant(){

    int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);

    }while(N<=0);

    int T[N];
    int temp;

    for(i=0;i<N;i++){
        printf("\nVeillez netrez la valeur de la  case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre tavleau : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]<=T[j]){
                temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
        }
    }

    printf("\nVotre tableau apres le tri par ordre croissant est : ");
    for(i=0;i<N;i++){
       printf(" %d | ", T[i]);
    }

    return 0;

}

int zerofin(){
    int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);

    }while(N<=0);

    int T[N];

    int temp;
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    printf("\nVoici votre tableau apres modification : ");

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(T[i]==0 && T[j]!=0){
                temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
        }
    }

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}
int main(){
    
   zerofin();
 return 0;
}