#include <stdio.h>
#include <math.h>

int exo39() {
    long n, cpt,vn;
    do{
        printf("\nVeillez entrez un entier n : ");
        scanf("%ld", &n);
    }while(n<=0);
     vn = n;
    cpt = 0;

    do{
        cpt++;
        n = n/10;

    }while(n!=0);

    printf("\nLe nombre de nombres dans %ld est : %ld", vn, cpt);

   return 0;
}

int inverse(){

    int inv,n,vn;

    printf("\nVeillez entrez un entier n : ");
    scanf("%d", &n);

    vn =n;
    inv = 0;

    while(n!=0){
        inv = inv*10 + n%10;
        n = n/10;
    }

    printf("\nL'inverse de : %d est : %d", vn, inv);

    return 0;

    
}

int palindrome(){

    int n, inv,vn;

    do{
        printf("\nVeillez entrez un entier n :");
        scanf("%d", &n);

}while(n<0);

      vn = n;
      inv = 0;

      while(n!=0){

        inv = inv *10 + n%10;
        n = n/10;
      }

      if(vn==inv){
          printf("\n%d est palindrome", inv);
      }else{
         printf("\n%d n'est pas palindrome", vn);
      }

      return 0;


}

int exo42(){

    int l,c,i,j;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);

    printf("\nVeillez entrez le nombre de columns : ");
    scanf("%d", &c);

    for(i = 1;i<=l;i++){
        for(j = 1;j<=c;j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;

}
int exo43(){

    int i,j,l;

    printf("\nVeillez entre le nombre de lignes : ");
    scanf("%d", &l);

    for(i = 1;i<=l;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

int exo44(){
    int j,c,i,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);
    printf("\nVeillez entrez le nombre de columns : ");
    scanf("%d", &c);

    for(i = 1;i<=l;i++){
        for(j = 1;j<=c;j++){
            if(i ==1||j==1||i==l||j==c){
                printf("* ");
            }else{
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}

int exo45(){

    int i,j,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);


    for(i=1;i<=l;i++){
        printf("\n");
        for(j=1;j<=l;j++){
            
            if(i==1||j==1||i==l||j==l||i==j||j==l-i+1){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

    return 0;
}

int exo46(){

    int i,j,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");
        }

        for(j=1;j<=l;j++){
            printf("* ");
        }

        printf("\n");

    }

    return 0;
}

int exo422(){
    int i,j,c,l;
  do{
printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);
  }while(l<0);
    
   do{
 printf("\nVeillez entrez le nombre de colomnes : ");
    scanf("%d", &c);
   }while(c<0);
   

    for(i = 1;i<=l;i++){
         for(j=1;j<=c;j++){
            printf(" * ");
         }
         printf("\n");
    }

    return 0;
}

int exo433(){
    int i,j,l;

     do{
        printf("\nVeillez entrez le nombre de lingnes : ");
        scanf("%d", &l);
     }while(l<0);



     for(i=1;i<=l;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
     }

     return 0;
 

}

int exo444(){
    int j,c,i,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);

    do{
        printf("\nveillez entrez le nombres de columns : ");
        scanf("%d", &c);
    }while(c<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=c;j++){
            if(j==1||i==1||i==l||j==c){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

int exo455(){
    int i,j,c,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);

    printf("\nVeilez entrez le nombre de columns : ");
    scanf("%d", &c);

    for(i=1;i<=l;i++){
        printf("\n");
        for(j=1;j<=c;j++){
            if(i==1||j==1||i==j||i==l||j==c||j==l-i+1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

int exo466(){
    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lingnes : ");
        scanf("%d", &l);
    }while(l<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");

        }

        for(j=1;j<=l;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


int exo47(){
    int i,j,l;

    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
                if(j==1||j== 2*i-1||i==l){
                    printf("* ");
                }else{
                    printf("  ");
                }
            
        }
        printf("\n");
    }

    return 0;
}

int exo48(){

    int i,j,p,c;

    do{
        printf("\nVeillez entrez le nombre de columns : ");
        scanf("%d", &c);
    }while(c<0);
    p=1;

    for(i=1;i<=2*c-1;i++){
       for(j=1;j<=p;j++){
          printf("* ");
       }        
       if(i<c){
          p++;
       }else{
        p--;
       }
       printf("\n");
    }
}

int inverset(){
    int l,i,j;

    printf("\nVellez entrez le nombres de lignes : ");
    scanf("%d", &l);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");
        }

        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int inverset2(){
    int i,j,l;
    printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);
  
  for(i=1;i<=l;i++){
 for(j=l;j>=i;j--){
        printf("*");

    }
    printf("\n");



  }
   return 0;
}
int main(){

  //exo39();
  //inverse();

   //palindrome();
   //exo48();
   inverset2();
return 0;
}

