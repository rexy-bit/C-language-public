#include <stdio.h>

int main(){

    int a,b,p,i;

    printf("\nVeillez entrer deux entiers  a et b : ");
    scanf("%d %d", &a, &b);

    if(b == 0){
        printf("\n%d^%d = 0", a, b);
    }else{
        p = 1;

        for(i = 1; i <= b; i++){
            p = p*a;
        }

        

    }

    printf("\n%d^%d = %d", a, b, p);

    return 0;
}