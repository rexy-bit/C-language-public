#include <stdio.h>

int main(){

    int s,i,n;
    float E;
 
    do{

        printf("\nEnter a value for n : ");
        scanf("%d", &n);
    }while(n < 0);

    s = 1;
    E = 1;
     
     for(i = 2;i<=n;i++){

        s = s + i;
        E = E + 1/s;
     }

     printf("\nThe final value of E is : %.2f", E);

     return 0;



}