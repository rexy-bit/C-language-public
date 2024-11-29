#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int t1(){
    
    int i,j,l;
     do{
printf("\nVeillez entrez le nombre de lignes : ");
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


int rec(){

    int i,j,l,c;

     do{
        printf("\nVeillez entrez le nombre de ligne : ");
        scanf("%d", &l);
     }while(l<0);

    do{
        printf("\nVEillez entrez le nombre de columns : ");
        scanf("%d", &c);

    }while(c<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=c;j++){
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}

int cadre(){

    int i,j,c,l;
    
    do{
        printf("\nVEillez entez le nombre de lignes : ");
        scanf("%d", &l);
    }while(l<0);

    do{
        printf("\nVeillez entrez le nombre de columns : ");
        scanf("%d", &c);
    }while(c<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=c;j++){
            if(i==1||j==1||i==l||j==c){
                printf("* ");
            }else{
                printf("  ");
            }


        }
        printf("\n");
    }

    return 0;
}

int r2(){

    int i,j,l;

do{
printf("\nVeillez entrez le nombre de lignes : ");
    scanf("%d", &l);
}while(l<0);


    for(i=1;i<=l;i++){
        for(j=1;j<=l;j++){
           
                if(i==1||j==1||i==l||j==l||i==j||j==l-i+1){
                    printf("*  ");
                }else{
                    printf("   ");
                }
        }
        printf("\n");
    }
    return 0;
    
}

int losange(){

    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
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

int t3(){

    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &l);

    }while(l<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            if(j==2*i-1||i==l||j==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

int tsimple(){
    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lignes: ");
        scanf("%d", &l);
    }while(l<0);

    for(i=1;i<=l;i++){
        for(j=1;j<=l-i;j++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
   return 0;
}

int t4(){
    int i,j,c,m;

    do{
        printf("\nVeillez entrez le nombre de columns : ");
        scanf("%d", &c);
    }while(c<0);
    m = 1;

    for(i=1;i<=c*2-1;i++){
        for(j=1;j<=m;j++){
            printf("* ");
        }
    
        printf("\n");

        if(i < c){
            m++;
        }else{
            m--;
        }



    }
       return 0;
}

t44(){

    int i,j,c,m;

    do{
        printf("\nVeillez entrez le nombres de colomnes : ");
        scanf("%d", &c);
    }while(c<0);

    m = 1;

    for(i=1;i<=c*2-1;i++){

        for(j=1;j<=m;j++){
            printf("* ");

        }
        printf("\n");

        if(i<c){
            m++;
        }else{
            m--;
        }

        
    }


    return 0;

}

int tinverse(){
    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &l);
    }while(l<0);

    for(i=1;i<=l;i++){
        for(j=l;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int tinverse2(){
    int i,j,l;

    do{
        printf("\nVeillez entrez le nombre de lignes : ");
        scanf("%d", &l);

    }while(l<0);

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

int main(){
 //t1();
//cadre();
 //rec();

  tinverse2();

    return 0;
}