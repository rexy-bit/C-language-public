#include <stdio.h>

int main(){

    int n,i,s,p;


    do{

        printf("\nEnter a value for n : ");
        scanf("%d", &n);
    }while(n < 0);

    s = 1;
    p = 1;

    for(i = 1; i <= n; i++){
        s = s + i;
        p = p*s;
        
    }

    printf("\nThe final value of the equation is : %d", s);


    return 0;
}


