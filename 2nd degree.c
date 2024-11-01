#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float d,x1,x2,x0;

    printf("\nEnter three integers : a,b,c : ");
    scanf("%d%d%d", &a,&b,&c);

    d = b*b - 4*a*c;

    x0 = -b/(2*a);
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    if(d < 0){
        printf("\nThe equation has no solutions in R ");
    } else if(d == 0){
        
        printf("\nThe equantion has only and only one solution in R : %.2lf", x0);
    }else if(d > 0){
        printf("\nThe equation has two solutions in R : X1 = %.2f, X2 = %.2f", x1, x2);
    }


    return 0;
}