#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



typedef struct{

    int a,b;
}rational;

rational sum(rational r1, rational r2){

    rational result;
    result.a = r1.a*r2.b + r2.a*r1.b;
    result.b = r1.b*r2.b;

    return result;
}

rational prod(rational r1, rational r2){
    rational result;
    result.a = r1.a*r2.a;
    result.b = r1.b*r2.b;

    return result;

}

rational enter(){
    rational r;
    printf("\nEnter the numerator : ");
    scanf("%d", &r.a);

    do{
        printf("\nEnter the denominator : ");
        scanf("%d", &r.b);
    }while(r.b == 0 );
    

    return r;
}

void display(rational r){
     printf("\nThe result is : %d/%d", r.a,r.b);
}
