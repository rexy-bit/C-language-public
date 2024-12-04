#include <stdio.h>

int main(){

    int a,b,p;

    printf("\nEntrez deux nombres a et b : ");
    scanf("%d %d", &a, &b);
    

    if(a<0){
        a = -a;
    }
    if(b<0){
        b = -b;
    }

    if(a== 0){
        
        
    }

    if(b== 0){
        p = b;
    }
    while(a!=b){
        if(a>b){
            p = a - b;
        }else{
            p = b -a; 
        }
    }

    printf("\nPGCD(a,b) = %d", p);

    return 0;
}