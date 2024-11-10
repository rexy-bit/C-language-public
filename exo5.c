#include <stdio.h>

int main(){

    int a,n,i,cpt;
    float f;

    do{
        printf("\nEnter a positive integer n : ");
        scanf("%d", &n);
    }while(n<0);

    printf("\nEnter a positive integer a : ");
    scanf("%d", &a);

    cpt = 0;

    for(i = 0; i<= n; i++){
        f = 150*sin(i)/(1 + i);

        if(f >= -a && f <= a){
            cpt++;
        }

        

    }

    printf("\nThe number of values of f(i) in [-%d, %d] is : %d", a, a, cpt);

    return 0;
}