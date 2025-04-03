#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fun.h"

main(){

    rational r1,r2;
    rational m, a;

    printf("\nEntering the information of r1 and r2 : ");
    r1 = info(r1);
    r2 = info(r2);

    m = mult(r1,r2);
    printf("\nThe result of multiplication is : ");
    printf("\nNominator : %d, denominator : %d", m.num,m.den);
     a = sum(r1,r2);
     printf("\n\nThe result of the addition is :");
     printf("\nNominator : %d, denominator : %d", a.num,a.den);

}