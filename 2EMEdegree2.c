#include <stdio.h>

int main(){
    int a,b,c,d;
    float x1,x2,x0;

    printf("\nEntrez de entier a, b, c:");
    scanf("%d %d %d", &a,&b,&c);

    d = b*b -4*a*c;

    if(d < 0){
        printf("\nL'equation n'a pas de solution dans R ");
    }else if(d == 0){
        x0 = -b/(2*a);
        printf("\nL\'equation a une seul solution dans R : ",x0);
    }else if(d>0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        printf("\nL\'equation a deux solutions sur R : \nx1 = %.2lf \nx2 = %.2lf  ", x1, x2);
    }

    return 0;
}