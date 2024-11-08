#include <stdio.h>

int main(){

    int i,N,a,cpt;
    float f;

    printf("\nEnter a value for n : ");
    scanf("%d", &N);

    printf("\nEnter a value for a : ");
    scanf("%d", &a);


    cpt = 0;
    for(i=0;i<N;i++){
        
        f = 150*sin(i)/(i+1);


        if((f >= -a) && (f<= a)){
            cpt++;
        }
        
    }

    printf("\nThe number of values of f(i) within the range for[-%d to %d[ is : %d", a,a, cpt);

    return 0;
}