#include <stdio.h>

int main(){
    
    int a,b;
    printf("\nEnter two integers a & b : ");
    scanf("%d %d", &a, &b);

    if(a<0){
        a = -a;
    }

    if(b<0){
        b = -b;
    }

    if( a == 0){
        printf("\nPGCD(a, b) = %d", a);
    }

    if(b == 0){
        printf("\nPGCD(a, b) = %d", b);
    }

    while(a!=b){
        if(a>b){
            a = a - b;
        }else{
            b = b -a;
        }
}    
      
      printf("\nPGCD(a, b) = %d", a);

      return 0;
    
}