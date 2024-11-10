#include <stdio.h>
#include <math.h>

int main(){

    int n,i;

    float max,f;

    printf("\nEnter a value for n : ");
    scanf("%d", &n);

    max = 150*sin(0)/1;

    for(i = 0; i<=n; i++){
        f = 150*sin(i)/(i + 1);

        if(max <= f){
            max = f;

        }
    }

    printf("\nThe maximum value for n is : %.2f", max);

    return 0;

}