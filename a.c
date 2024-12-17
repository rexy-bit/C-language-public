#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int calculator(){
 printf("\nWelcome to the calculator program : ");
 printf("\n\n");
    double num1,num2,result;

    char operator;

    printf("\nChoose an opeator (+,-;/,*) : ");
    scanf("%c", &operator);

    printf("\nEnter number 1 : ");
    scanf("%lf", &num1);

    printf("\nEnter number 2 : ");
    scanf("%lf", &num2);

    switch(operator){
        case '+' : 
        result = num1 + num2;
        break;

        case '-' : result = num1 - num2;
        break;

        case '*' : result = num1 * num2;
        break;

        case '/': 
           if(num2 == 0){
            printf("\nMath error : impossible to devide by 2 ");
            
           }else{
            result = num1 / num2;
           }
           break;
        
        default : 
          printf("\nMath error : please check that you entered a correct operator : ");
          break;
    }

    printf("\n%.2lf %c %.2lf = %.2lf", num1,operator, num2, result);

    return 0;
    
}

int db(){
    int d,vd,b,p;
    printf("\n\n");

    printf("\nWelcome to the decimal to binary convertor program : ");
    printf("\n\n");

    do{
        printf("\nVeilez entrez un nombre decimale : ");
        scanf("%d", &d);
    }while(d<0);

    vd = d;
    b = 0;
    p = 1;

    while(d!=0){
         b = b + (d%2)*p;
         d = d/2;
         
         p*=10;
    }

    printf("\n%d decimale en binaire est %d ", vd, b);

    return 0;


}

int bd(){
    printf("\n\n");
    printf("\nWelcome to the binary to decimal convertor program : ");
    printf("\n\n");

    int b, vb, d, p;

    do{
        printf("\nEnter a binary number : ");
        scanf("%d", &b);
    }while(b<0);

    vb=b;
    d = 0;
    p = 1;

    while(b!=0){
        d = d + (b%10)*p;
        p = p*2;
        b = b/10;
    }

    printf("\n%d binaire en decimale est : %d", vb, d);

    return 0;
}


int inv(){
    printf("\n\n");
    printf("\nWelcome to the number inverser program : ");
    printf("\n\n");


    int inv,n,vn;

    do{
        printf("\nEnter an integer poitive number : ");
        scanf("%d", &n);
    }while(n<0);

    inv = 0;
    vn = n;
    while(n!=0){
        inv = inv*10 + n%10;
        n /= 10;
    }

    printf("\nL'inverse de : %d est : %d", vn, inv);

    return 0;


}

int sumdigits(){

    int s,n,vn;

    do{
        printf("\nEnter an integer number n : ");
        scanf("%d", &n);

    }while(n<0);

    vn = n;
    s = 0;

    while(n != 0){
        s = s + n%10;
        n /= 10;
    }

    printf("\nThe sum of the digits that contain the number %d is equal to : %d", vn, s);

    return 0;


}


int ndn(){

    int n,S,i;

    printf("\nVeillez entrez un entier n : ");
    scanf("%d", &n);

    S = 0;
    for(i=1;i<=n-1;i++){
        S = S + i;
        
    }

    printf("\nLa somme des entier qui composent %d est : %d",n, S);
    return 0;
}

int pr(){
    int x,d,i;

    bool p = true;
    do{
     printf("\nVeillez entrez un entier n : ");
    scanf("%d", &x);
    }while(x<0);
  

    d = x/2;


    if(x==1){
        p = false;
    }else{
        i=2;
        while(i<=d && p == true){

            if(x%i == 0){
                p = false;
            }
        }
        i++;
    }

    if(p){
        printf("\n%d est premier", x);
    }else{
        printf("\n%d n'est pas premier", x);
    }

    return 0;
}


int exop(){

    int i,A,d;
    bool p = false;

    printf("\nVeillez entrez un entier : ");
    scanf("%d", &A);

    i = 2;
    d = A/2;

    while(i<=d && p==false){
        if(A%i==0){
            p = true;
        }
        i++;
    
    }

    if(p==true){
        printf("\n%d n'est premier", A);
    }else{
        printf("\n%d est premier", A);
    }

    return 0;
}

int decimale(){

    int d,vb,b,p;
    

    do{
        printf("\nVeillez entrez un nombre binaire : ");
        scanf("%d", &b);
    }while(b<0);

    vb=b;
    p=1;
    d=0;
  

    while(b!=0){
        d = d + (b%10)*p;
        p*=2;
        b = b/10;
    }

    printf("\n%d en decimale est %d", vb,d);

    return 0;

}

int prs(){

    int i,N,ps;

  do{
    printf("\nVeillez saisir la taille du tableau : ");
    scanf("%d", &N);
  }while(N<=0);
 ps = 0;

  int T1[N], T2[N], T3[N];

  for(i=0;i<N;i++){
    
    printf("\nVeillez entrez la valeur de la case : %d du tableau 1 : ", i);
    scanf("%d", &T1[i]);

    printf("\n");
    printf("\nVeillez entrez la valeur de la case : %d du tableau numero 2 : ", i);
    scanf("%d", &T2[i]);

    T3[i]=T1[i]+T2[i];
    ps = ps + T1[i]*T2[i];

  }

  printf("\nLe produit scalaire est : %d", ps);

  printf("\nLa somme est : ");
  for(i=0;i<N;i++){
    printf(" %d | ",T3[i] );
  }
  
    return 0;
}

int drac(){

    int i,N,j,val;

    do{
        printf("\nVeillez saisir la taille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    int T[N],pos[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i);
        scanf("%d", &T[i]);
    }

    printf("\n");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    printf("\n");
    printf("\nVeillez saisir la valeur a rechercher : ");
    scanf("%d", &val);
    j=0;

    for(i=0;i<N;i++){
       if(T[i]==val){
          pos[j]=i;
          j++;
       }
    }

    if(j==0){
        printf("\n %d n'existe meme pas dans le tableau", val);
    }else{
        printf("\nLes indices ou val existe dans le tableau : ");
            for(i=0;i<j;i++){
           printf(" %d | ", pos[i]);
    }
    }


    return 0;



    
}

int pgcd(){
    int a,b;

     printf("\nEntrez les valeurs de a et b : ");
     scanf("%d%d", &a, &b);

     if(a == 0){
        printf("PGCD = %d", b);
     }else if(b==0){
        printf("PGCD = %d", a);
     }else{
        while(a!=b){
            if(a<b){
               b = b -a;
            }else if(a>b){
                a = a - b;
            }
        }

        printf("\nPGCD = %d ", a);


     }
   return 0;
}

int test(){

    int i,j,result;

    for(i=1;i<=4;i++){
         j = 3;
         
         while(j){
            result = i*j;
            printf("\ni = %d, j = %d, result = %d", i,j,result);
            i++;
            j--;
         }
    }

    return 0;
}


int inv2(){

    int i,j,N;

    do{
        printf("\nVeillez entrez la taille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);
  int T[N];
    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ",i+1);
        scanf("%d", &T[i]);
    }


   printf("\nVotre tavleau est : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    j = N-1;
    i=0;
      int temp;
    while(i<=j){
     temp=T[i];
     T[i]=T[j];
     T[j]=temp;
     i++;
     j--;
    }

    printf("\n\nLe tableau inverser est : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}


int paires(){

    int i,j,N,k;

    int T[100];
    int A[100];
    int B[100];


    do{
        printf("\nVeillez entrez l ataille de votre tableau : ");
        scanf("%d", &N);
    }while(N<=0);

    for(i=0;i<N;i++){
        printf("\nVeuillez entre la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }
    k = 0;
    j=0;
    for(i=0;i<N;i++){
        if(T[i]%2==0){
             
             A[j]=T[i];
             j = j+1;
        }else{
            
            B[k]=T[i];
            k=k+1;
        }
    }

    printf("\n\nVoici le tableau des paires : ");
    for(i=0;i<j;i++){
       printf(" %d | ", A[i]);
    }

    printf("\n\nLe tableau des impaires est : ");
    for(i=0;i<k;i++){
        printf(" %d | ", B[i]);
    }

    return 0;
    
}

int crois(){

    int i,j,N;

    do{
        printf("\nVeillez entrez la taille du tableau : ");
        scanf("%d", &N);
       
    } while(N<=0);

    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case %d : ", i+1);
        scanf("%d", &T[i]);
    }
    printf("\nVoici votre tableau apres le tri : ");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    i=0;
    j=1;
    int temp;
    
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]>T[j]){
                temp = T[i];
                T[i]=T[j];
                T[j]=temp;
            }
        }
    }

    printf("\n\nLe tableau apres l'ordre est : ");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
    
}
//Je suis 
int exo6hamham(){

    int i,j,N,M,K;

    do{
        printf("\nVeillez entrez la taille du vecteur 1 : ");
        scanf("%d", &N);
    }while(N<=0);

    int V1[N];
    
    for(i=0;i<N;i++){
       printf("\nVeillez entrez la valeur de l acase %d du vecteur 1 : ",i+1);
       scanf("%d", &V1[i]);
    }

   printf("\n");
    do{
        printf("nVeillez entrez la taille du vecteur 2 : ");
        scanf("%d", &M);
    }while(M<=0);

    int V2[M];

    printf("\n");

    for(i=0;i<M;i++){
      printf("\nVeillez entrez la valeur de la case %d du vecteur 2 : ", i+1);
      scanf("%d", &V2[i]);
    }

    printf("\nVoici votre premier vecteur : ");
    for(i=0;i<N;i++){
        printf(" %d | ", V1[i]);
    }

    printf("\n\nVoici votre deuxieme vecteur : ");
    for(i=0;i<M;i++){
        printf(" %d | ", V2[i]);
    }

    int V3[200];

    K = 0;
    for(i=0;i<N;i++){
      
      V3[K]=V1[i];
      K++;
    }

    for(i=0;i<M;i++){
        V3[K]=V2[i];
        K++;
    }

    printf("\nVoici votre troisieme vecteur : ");
    for(i=0;i<K;i++){
        printf(" %d | ", V3[i]);
    }


     int l;

    for(i=0;i<K;i++){
        for(j=i+1;j<K;j++){
            if(V3[i]==V3[j]){
                for(l=j;l<K-1;l++){
                    V3[l]=V3[l+1];
                }
                K--;
                j--;

              }
        }
    }

    printf("\nVotre tableau apres avoir supprimer les valeurs identiques est : ");
    printf("\n");

    for(i=0;i<K;i++){
        printf(" %d | ", V3[i]);
    }
   
   int temp;

    for(i=0;i<K;i++){
        for(j=i+1;j<K;j++){
        if(V3[j]<V3[i]){
           temp=V3[i];
           V3[i]=V3[j];
           V3[j]=temp;
        }
        }
    }

    printf("\nLe tableau 3 apres avoir trier tous les element par ordre croissant est : ");
    for(i=0;i<K;i++){
        printf(" %d ",V3[i]);

    }

    

   return 0;
}

int negpos(){

    int i,j,N,temp;

    do{
        printf("\nVeilllez entrez l ataille du tableau : ");
        scanf("%d", &N);
    }while(N<=0);
    int T[N];

    for(i=0;i<N;i++){
        printf("\nVeillez entrez la valeur de la case  %d : ", i+1);
        scanf("%d", &T[i]);
    }

    printf("\nVotre nouveau tableau est : \n\n");

    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }
    

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(T[i]>=0 && T[j]<0){
              temp = T[i];
              T[i]=T[j];
              T[j]=temp;
            }
        }
    }

    printf("\n\nVotre nouveau tableau est : \n\n");
    for(i=0;i<N;i++){
        printf(" %d | ", T[i]);
    }

    return 0;
}







int main(){

    //calculator();
    
    //db();
    //bd();
    //inv();

    //sumdigits();
     negpos();
    //ndn();
     //pgcd();
    //exop();




    return 0;
}
