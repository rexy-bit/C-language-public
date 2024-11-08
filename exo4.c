#include <stdio.h>
#include <math.h>

int main(){

    int i,N;
    float f,max;

    do{
        printf("\nEnter a positive integer : ");
        scanf("%d", &N);
    }while(N<0);

    max = 150*sin(0)/1;

    for(i=0;i<N;i++){

        f = 150*sin(i)/(1 + i);

        if(max <= f){
            max = f;
        }

        
    }

printf("\nLe max est : %.2f", max);


}