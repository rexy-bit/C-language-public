#include <stdio.h>

int main(){

    int b,vb,d,p;
    

do{
    printf("\nVeillez entrez un nombre en binaire : ");
    scanf("%d", &b);
}while(b<0);

        vb = b;
        d = 0;
        p = 1;

        while(b!=0){

            d = d + (b%10)*p;
            p = p*2;

            b = b/10;
        }

        printf("\nLa valeur de %d est decimale\test\t:%d", vb,d);

        return 0;

}