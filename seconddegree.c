#include <stdio.h>

int main(){

    int a,b,c;
    float x1, x2, d, x0;

    
        printf("\nEnter a,b and c three integer numbers : ");
        scanf("%d %d %d", &a ,&b, &c);

        d = pow(b, 2) - 4*a*c;

        if(d > 0){

            x1 = (-b + sqrt(d))/(2*a);
            x2 = (-b - sqrt(d))/(2*a);

            printf("\nThe equation has two solutions in R : ");
            printf("X1 = %.2f,\nX2 = %.2f", x1, x2);
        }else if(d == 0){

            x0 = -b/(2*a);

            printf("\nThe equation has one and only one solution on R : \nX0 = %.2f", x0);
        }else{
            printf("\nTHe equantion has no solutions in R");
        }

        return 0;


    
}