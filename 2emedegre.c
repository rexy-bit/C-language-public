#include <stdio.h>
int main(){
    double a,b,c,X1,X2,X, Delta;

    printf("\nEnter a :");
    scanf("%lf", &a);

    printf("\nEnter b :");
    scanf("%lf", &b);

    printf("\nEnter c :");
    scanf("%lf", &c);

    if(a == 0){
        if(b==0){
            if(c==0){
                printf("\nEquation Impossible");
                return 0;
            }else if(c != 0){
                printf("Equantion impossible (pas de valeur de x)\n");

                return 0;
            }
        }else{
            X = -c/b;
            printf("L'equation a une solution X = %.2lf\n", X);
            return 0;
        }
    }else{
        Delta = b*b - 4*a*c;

        if(Delta < 0){
            printf("\nL'equation ne possede pas de solution sur R\n");
            return 0;
        }else{
            if(Delta == 0){
                X = -b/(2*a);
                printf("\nL'equation possede une solution sur R qui est X = %.2lf\n", X);
                return 0;
            }else{
                X1 = (-b + sqrt(Delta))/(2*a);
                X2 = (-b - sqrt(Delta))/(2*a);
                
                printf("\nL'equation possede 2 solutions sur R : X1 = %.2lf, X2 = %.2lf", X1, X2);

                return 0;
            }


        }

    }

    return 0;
}