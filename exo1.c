#include <stdio.h>
#include <stdbool.h>

int exo1(){
    int n,i,s;

    do{
    printf("\nVeillez entrez un entier n : ");
    scanf("%d", &n);
    }while(n<0);

    s = 0;
    for(i = 0;i<=n;i++){
        s = s+i;
    }

    printf("\nLa somme des %d premiers entiers est : %d", n, s);


    return 0;
}

int exo2(){

    int p,n,k,i;

    do{
        printf("\nVeillez entrez deux entiers n et k : ");
        scanf("%d %d", &n, &k);
    }while(n<0 || k<0);


    if(k==0 || n==0){
        p = 0;
    }

    if(k == n){
        p = n;
    }

    p = 1;

    if(n<k){

        for(i = n;i<=k;i++){
            p *=i;
        }
    }
    if(k<n){


        for(i=k;i<=n;i++){
            p *=i;
        }
    }

    printf("\nLe produit des entiers entre n et k est : %d", p);

    return 0;
}

int exo3(){
    int n,k,i,S;

    do{
        printf("\nEntrez deux entiers n et k : ");
        scanf("%d %d", &n, &k);
    }while(n<0 | k<0);

    S = 0;

    for(i = n;i<=k;i++){
        if(i%2 != 0){
            S += i;
        }

    }

    printf("\nLa somme des entiers impaires entre %d et %d est : %d", n, k,S);

    return 0;
}

int exo4(){

    int n,S,i;

    printf("\nEntrez un entier n : ");
    scanf("%d", &n);

    S = 0;

    while(n!=0){
        S = S+n;
        printf("\nEntrez un entier n : ");
        scanf("%d", &n);
    }

    printf("\nLa somme des entier entres est : %d", S);

    return 0;
}

int exo33(){

    int S,max , min, n,op,cpt;
    float moy;

    printf("\nEntrez un entier n : ");
    scanf("%d", &n);

    min= n;
    max = n;
    op = 0;
    S = 0;
    moy = 0;

    while(n!=0){
        if(min>n){
            min = n;

        }else if(max<n){
            max = n;
        }

        S += n;
        cpt++;

        printf("\nEntrez un autre entier n que vous souhaitez (tapez 0 si vous voulez arreter l'operation) : ");
        scanf("%d", &n);
        
    }

    moy = S/cpt;

    printf("\nTapez 1 pour afficher min\nTapez 2 pour afficher max\nTapez 3 pour afficher la moyenne des nombres entres : ");
    scanf("%d", &op);

    switch(op){
        case 1 : printf("\nLe min est : %d", min);
        break;
        case 2: printf("\nLe max est : %d", max) ;
         break;

         case 3 : printf("\nLa moyenne est : %d", moy);
         break;

         default : 
         printf("\nErreur");
         break;

    }
  printf("\n\n");
    printf("\n******************");
    printf("\nFin");
    printf("\n******************");

    return 0;
}

int exo44(){
    int n,d,i;
    bool p = true;

    printf("\nEntrez un entier n : ");
    scanf("%d", &n);
     d = n/2;
    if(n == 1){
        p = false;
    }else{
        
        for(i = 2;i<=d;i++){
            if(n%i == 0){
                p = false;
            }

        }
    }

    if(p == true){
        printf("\n%d est premier", n);
    }else{
        printf("\n%d n'est pas premier", n);
    }

return 0;
    
}
int main(){

   // exo1();
   // exo2();
  exo44();
     
    return 0;

}