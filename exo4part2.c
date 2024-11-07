#include <stdio.h>
#include <math.h>

int main(){

    int i,a,n,cpt;
    float f;

    do{

        printf("\nEnter an integer n : ");
        scanf("%d", &n);
    }while(n<0);

    printf("\nEnter an integer a : ");
    scanf("%d", &a);


    cpt = 0;

    for(i = 0;i < n ;i++){
       f = 150*sin(i)/(i + 1);

       if((f >= -a) && (f <= a)){
           cpt = cpt + 1;
       }

    }

    printf("\nThe number of element of the function f that are between the bornes [-a, a] are : %d", cpt);

    return 0;

    


}