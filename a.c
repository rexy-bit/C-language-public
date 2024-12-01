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

int main(){

    //calculator();

    //db();
    //bd();
    //inv();

    //sumdigits();

    //ndn();
    pr();




    return 0;
}
