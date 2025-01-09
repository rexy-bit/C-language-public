#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>


void exo1(){
    int i,j,N,M;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);

    do{
        printf("\nVeillez entrez la nombres de colomnes : ");
        scanf("%d", &M);
    }while(M<=0);
  int A[N][M];
    printf("\nRemplissage de la matrice : ");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("\nVeillez entrez la valeur de la lignes %d colomne %d : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nAffichage de la matrice : \n");
    for(i=0;i<N;i++){
       for(j=0;j<M;j++){
        printf("%d | ", A[i][j]);
       }
       printf("\n");
    }
}


int exoexam(){

    int i,j,inv;

    int N;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &N);
    }while(N<=0);
 int A[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nVeillez entrez la valeur ligne : %d colomne : %d : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nVoici votre matrice : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }


    int temp;

    j = N-1;
    for(i=0;i<N;i++){
        temp = A[i][i];
        A[i][i]=A[i][j];
        A[i][j]=temp;
        j--;
    }

    printf("\nL'inverse des 2 diagnales : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }

    int nbr=0;

     for(i=0;i<N;i++){
       nbr = nbr*10 + A[i][i];
     }

     printf("\nVoici le nombre qui compose la diagonale principlr : %d\n", nbr);

     int vnbr = nbr;
     inv = 0;
     while(vnbr>0){
        inv = inv*10 + vnbr%10;
        vnbr = vnbr/10;
     }

     printf("\nL'inverse de %d est %d", nbr, inv);

    return 0;

}

int inserer(){
    int i,N,j;

    do{
        printf("\nVeillez entrez le nombre de case : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVoici votre cvhere tableau  : \n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    int val,pos;
    printf("\nVeillez entrez la valuer que vous voulez inserer : ");
    scanf("%d", &val);

    printf("\nVeillez entrez la position dans laquelle vous voulez l'inszerer : ");
    scanf("%d", &pos);
    j=N;
    if(pos>=1&&pos<N){
        for(i=pos-1;i<N+1;i++){
            T[j]=T[j-1];
            j--;
        }
        T[pos-1]=val;
        N++;
    }else{
        printf("\nLa position que vous avez choisi ne figure pas dans le tableau :)");
    }

    printf("\nVoici votre tableau : ");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
   
  return 0;
}

int supprimer(){

    int i,N,j;
    int val;

    do{
        printf("\nVeillez entrez la y*taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
     printf("\nVeillez entrez la valeur de la case %d  : ", i+1);
     scanf("%d", &T[i]);
    }

    printf("\nVoici votre magnifique tableau : \n");
    for(i=0;i<N;i++){
          printf(" %d | ", T[i]);
    }


    printf("\nveillez entre la valeur a supprimer du tableau : ");
    scanf("%d", &val);
    bool p = 0;

    for(i=0;i<N;i++){
         if(T[i]==val){
            p = 1;
            for(j=i;j<N-1;j++){
                T[j]=T[j+1];
            }
            N--;
            i--;
         }
    }
 if(p==1){

 
    printf("\nVoici votre tableau apres la suppression de %d : ", val);
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
 }else{
    printf(" %d n'existe meme pas dans le tableau : ", val);
 }

    return 0;
}

void Tminmax(int T[], int N, int min,int max){
    int i;

    min = T[0];
    max = T[0];

    for(i=1;i<N;i++){
        if(T[i]<min){
            min = T[i];
        }else if(max<T[i]){
            max = T[i];
        }
    }

    printf("\nLe minimum est : %d", min);
        printf("\nLe maximum est : %d", max);

}

void ComposMatr(int a, int b,int N, float A[N][N]){
    int i,j;
    
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            A[i][j]= a;
        }
    }

    for(i=1;i<N;i++){
        for(j=0;j<i-1;j++){
          A[i][j]=b;
        }
    }

    for(i=0;i<N;i++){
        A[i][i]=(a+b)/2;
    }

}

void Trans(int N, float B[N][N],float A[N][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++) {
           B[j][i]=A[i][j];
        }
        
    }
}
int transpose(){

    int i,N,j;

    do{
        printf("\nveillez entrez la taille de votre matrice carree : ");
        scanf("%d", &N);
    }while(N<=0);
  int A[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nVeillez entrez la valeur ligne %d colomne %d : ",i+1,j+1 );
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nVoici votre magnifique matrice carre : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d | ", A[i][j]);
        }
        printf("\n");
    }

    int B[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            B[j][i]=A[i][j];
        }
    }

    printf("\nVoici la matrice transpose : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", B[i][j]);
        }
        printf("\n");
    }

    return 0;

}

int pascal(){
    int N,i,j;

    do{
        printf("\nVeillez entrez la taille de votre matrice carre : ");
        scanf("%d", &N);
    }while(N<=0);

    int A[N][N];
    printf("\nRemplissage du triangle de pascal : \n");

    for(i=0;i<N;i++){
        A[i][0]=1;
        A[i][i]=1;
    }

    for(i=2;i<N;i++){
        for(j=1;j<i;j++){
            A[i][j]=A[i-1][j]+A[i-1][j-1];
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }

return 0;
}

int sommemat(){
    int i,j,N,M;

  

    do{
        printf("\nVeillez entrez le nombre de lignes  : ");
        scanf("%d", &N);
    }while(N<=0);

    do{
        printf("\nveillez entrez le nombre de colomne : ");
        scanf("%d", &M);
    }while(M<=0);

      int A[N][M];
    int B[N][M];
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nVeillez entrez la valeur [%d, %d] : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nRemplissage de la matrice B : \n");
    for(i=0;i<N;i++){
       for(j=0;j<N;j++){
         printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
         scanf("%d", &B[i][j]);
       }
    }

    int C[N][M];

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    printf("\nLa somme des deux matrices est : \n");

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf(" %d | ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
    }

    int produit(){

        int i,j,N,M,P,pr,k;

        do{
            printf("\nVeillez entre le nombre de lignes de la matrice A et colomnes de la matrice B : ");
            scanf("%d",&N );

        }while(N<=0);

        do{
            printf("\nVeillez entrez le nombre de colomnes de la matrice A : ");
            scanf("%d", &M);
        }while(M<=0);

        do{
            printf("\nVeillez entrez le nombre de lignes de la matrice B : ");
            scanf("%d", &P);
        }while(P<=0);

        int A[N][M];
        int B[P][N];

        printf("\nRemplissage de la matrice A : \n");
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nRemplissage de la matrice B : \n");
        for(i=0;i<P;i++){
            for(j=0;j<N;j++){
                printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
                scanf("%d", &B[i][j]);
            }
        }

        int C[P][M];

        for(i=0;i<P;i++){
            for(j=0;j<M;j++){
                pr = 0;
                for(k=0;k<N;k++){
                    pr += A[k][j]*B[i][k];
                }
                C[i][j]=pr;
            }
        }

        printf("\nLa matrice A est : \n");
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }

        printf("\nLa matrice B est : ");
        for(i=0;i<P;i++){
            for(j=0;j<N;j++){
                printf(" %d | ", B[i][j]);
            }
            printf("\n");
        }


        printf("\nLe produit des deux matrices est : \n");

        for(i=0;i<P;i++){
            for(j=0;j<M;j++){
               printf(" %d | ", C[i][j]);
            }
            printf("\n");
        }

        return 0;

    }

    int diago(){
        int i,j,N;

        do{
        printf("\nVeillez entrez la taille de votre matrice : ");
        scanf("%d", &N);
        }while(N<=0);

        int A[N][N];

        printf("\nRemplissage de la matrice : \n");
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nVoici votre matrice : ");
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }

         int S1 = 0;
         int S2 = 0;
          j = N-1;
         for(i=0;i<N;i++){
            S1 = S1 + A[i][i];
            S2 = S2 + A[i][j];
            j--;
         }      

         printf("\nLa somme de la diagonale principale est : %d ", S1);
         printf("\nLa somme de la diagonale non principale est : %d", S2);

         return 0;

    }

    int pascal2(){
        int i,j,N;

        do{
            printf("\nVeillez entrez la taille de votre matrice : ");
            scanf("%d", &N);
        }while(N<=0);
     int A[N][N];
      
      for(i=0;i<N;i++){
        A[i][0]=1;
        A[i][i]=1;
      }

      for(i=2;i<N;i++){
        for(j=1;j<=i-1;j++){
            A[i][j]=A[i-1][j]+A[i-1][j-1];
        }
      }

      printf("\nVoici votre triangle de pascal : \n");
      for(i=0;i<N;i++){
       for(j=0;j<=i;j++){
        printf(" %d | ", A[i][j]);
       }
       printf("\n");
      }

    }


    int progcalc(){

        int i,j,N,M;

        do{
            printf("\nVeillez entrez le nombre de lignes : ");
            scanf("%d", &N);
        }while(N<=0);

        do{
            printf("\nveillez entrez le nombre de colomnes : ");
            scanf("%d",&M);
        }while(M<=0);

        int A[N][M];

        int pos[M];
        int k=0;

        printf("\nRemplissage de la matrice : ");
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nVoici votre matrice : \n");
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }
   int T[M];
        printf("\nRemplissage du vecteur : ");
        for(i=0;i<M;i++){
            printf("\nVeillez entrez la valeur %d du vecteur : ", i+1);
            scanf("%d", &T[i]);
        }

        printf("\nVoici votre tableau : \n");
        for(i=0;i<M;i++){
            printf(" %d | ", T[i]);
        }
bool p;
        for(i=0;i<N;i++){
            p = 1;j=1;
            while(j<M && p == true){
              if(T[j]!=A[i][j]){
                 p = false;
              }
              j++;
            }

            if(p==true){
                pos[k]=i+1;
                k++;
            }
        }

        if(k==0){
            printf("\nLe vecteur n'existe pas dans le tableau");
        }else{
            printf("\nLe vecteur existe dans le tableau : ");
            printf("\nIl se repete %d fois", k);
            printf("\nLes positions dans le tableau sont : \n");
            for(i=0;i<k;i++){
                printf(" %d | ", pos[i]);
            }
        }

        return 0;
    }


    int prog(){
        double num1,num2,result;
        char op;
        int p;

        printf("\nBienvenu dans le programme calculatrice : \n");

   do{
    printf("\nVeillez choisir un operateur(+,-,/,*) : \n");
    scanf(" %c", &op);

    printf("\nVeillez entrez le premier numero : ");
    scanf("%lf", &num1);

    printf("\nVeillez entrez le deuxieme numero : ");
    scanf("%d", &num2);

    switch(op){
        case '+':
            result = num1 + num2;
            printf("\nLa somme est : %.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nLe result est : %.2lf", result);
            break;

        case '*':
        result = num1*num2;
        printf("\nLe resultet est : %.2lf", result);
        break;

        case '/':

           if(num2 == 0){
            printf("\nMath error impossible d'efectuer la division sur un null");

           }else{
             result = num1 / num2;
             printf("\nLe result est : %.2lf", result);
           }
           break;


           default : 
             printf("\nMath error veillez verifier que vous avez entrez l'operateur correct");
             break;

    }

    printf("\nVoulez vous continuer ?\nTaper 1 pour 'Oui' ou 0 pour 'Non' : ");
    scanf("%d", &p);
   }while(p!=0);


   return 0;
       

    }

    progcalculus(){

        double num1,num2,result;
        double n;
        int op;
        int a,b,r;
        int cpt;

        do{
            printf("\nVoici le menu du programme\nChoisissez la tache que vous voulez effectuer : ");
            printf("\n");
            printf("\n------------------------------------------------------------");
            printf("\nTapez 1 pour la somme : ");
            printf("\nTapez 2 pour la soustraction : ");
            printf("\nTapez 3 pour la multiplication : ");
            printf("\nTapez 4 pour la divison : ");
            printf("\nTapez 5 pour trouver le reste de la division de 2 nombres : ");
            printf("\nTapez 6 pour calculer la puissance d'un nombre : ");
            scanf(" %d", &op);
               printf("\n------------------------------------------------------------");
            
            switch(op){
                case 1 : 

                printf("\nVeillez entrez le premier numùero : ");
                scanf("%lf", &num1);

                printf("\nVeillez entrez le deuxieme numero : ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("\nLa somme est : %lf", result);

                break;

                case 2 : 
                  printf("\nC'est la soustraction : ");
                  printf("\nVeillez entrez le premier numero : ");
                  scanf("%lf", &num1);

                  printf("\nVeillez entrez le numero 2 : ");
                  scanf("%lf", &num2);

                  result = num1 - num2;
                
                  break;

            
              case 3 : 
                          printf("\nC'est la soustraction : ");
                  printf("\nVeillez entrez le premier numero : ");
                  scanf("%lf", &num1);

                  printf("\nVeillez entrez le numero 2 : ");
                  scanf("%lf", &num2);

                  result = num1 * num2;
                  printf("\nThe result : %.2lf", result);
                  break;

            case 4 : 
               printf("\nC'est la division : ");

               
                printf("\nVeillez entrez le premier numero : ");
                  scanf("%lf", &num1);

                  printf("\nVeillez entrez le numero 2 : ");
                  scanf("%lf", &num2);

                  if(num2 == 0){
                    printf("\nMath error divion sur 0 impossible");
                  }else{
                  result = num1/num2;
                  printf("\nThe result is : %lf", result);
                  }
  
                  break;

            case 5 : 
              printf("\nC'est le reste de la divsion entiere : ");
              printf("\nVeillez entrez le premier numero : ");
              scanf("%d", &a);

              printf("\nVeillez entrez le deuxieme numero : ");
              scanf("%d", &b);
              r = a%b;
              printf("\nLe reste de la division entiere est : %d", r);
              break;

            case 6 : 
             
             printf("\nVeillez entrez votre numero : ");
             scanf("%d", &a);

             printf("\nVeillez entrez la puissance");
             scanf("%d", &b);

             r = pow(a, b);
             printf("\nLe resulat est : %d", r);

              default : 
                printf("\nEreur assurez vous d'avoir entrez le nombre correct : ");
               
                
                
            }

            printf("\nVoulez vous recommencer ?\nTaper 1 pour 'Oui' ou 0 pour 'Non'");
            scanf("%d", &cpt);

            
        }while(cpt!=0);

        printf("\nMerci de nous avoir choisie on espere que vous avez adorer utiliser notre application : ");


        return 0;
    }

    int matinv(){

        int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre matrice : ");
        scanf("%d", &N);
    }while(N<=0);
    int A[N][N];

    printf("\nRemplissage de la matrice : ");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nVoici votre matrice' : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }
int temp;
    printf("\nVoici l'invesre par rapport a la diagonale principale : ");
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }

    printf("\nVotre matrice apres l'inversement est : \n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf(" %d | ", A[i][j]);
        }
        printf("\n");
    }

    return 0;

    }

    int matr(){
        int i,j,N,M;

        do{
            printf("\nVeillez entrez le nombre de lignes : ");
            scanf("%d", &N);
        }while(N<=0);

        do{
            printf("\nVeillez entrez le nombre de colomnes : ");
            scanf("%d",&M);
        }while(M<=0);

        int A[N][M];

        printf("\nRemplissage de la matrice : ");

        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf("\nVeilelz entrez la valeur [%d , %d] : ", i+1,j+1);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nVoici votre matrice : \n");
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }
int k,temp;
        printf("\nL'inverse des colomnes : ");
        for(i=0;i<N;i++){
            j=M-1;
            k=0;
            while(k<j){
                temp = A[i][k];
                A[i][k]=A[i][j];
                A[i][j]=temp;
                j--;
                k++;
            }
        }


        printf("\nLa matrice apres l'inversemant est : \n");
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
    int matricet(){

        int i,j,N;

        do{
        printf("\nVeillez entrez la taille de votre matrice : ");
        scanf("%d", &N);
        }while(N<=0);

        int A[N][N];

        for(i=0;i<N-1;i++){
            for(j=i+1;j<N;j++){
                A[i][j]=0;
            }
        }

        for(i=1;i<N;i++){
            for(j=0;j<i;j++){
                A[i][j]=0;
            }
        }
  printf("\nRemplissage de la diagonale de la matrice : \n");
        for(i=0;i<N;i++){
                printf("\nVeillez entrez la valeur [%d , %d] : ", i+1,i+1);
                scanf("%d", &A[i][i]);
            
        }
         printf("\nVoici votre matrice triangulaire : \n");
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf(" %d | ", A[i][j]);
            }
            printf("\n");
        }

        return 0;

    }

    int testbab(){

        int i,N;

        do{
            printf("\nVeillez entrez le nombre d'etudiants : ");
            scanf("%d", &N);
        }while(N<=0);

        int notes[N];
        char noms[N][50];

        for(i=0;i<N;i++){
            printf("\nVeillez entrez le nom de l'etudiant %d : ", i+1);
            scanf("%s", noms[i]);

            printf("\nVeillez entrez la note de %s : ", noms[i]);
            scanf("%d", &notes[i]);
        }

        for(i=0;i<N;i++){
            printf("\n%49s a eu : %d/20", noms[i], notes[i]);
        }

        return 0;
    }
int main(){
     testbab();
     return 0;

     
}