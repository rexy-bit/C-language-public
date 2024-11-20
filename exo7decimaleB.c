#include <stdio.h>

int main(){

    int vd,d,b,p,R;

     do{
        printf("\nVeillez entrez un nombre decimal positif : ");
        scanf("%d", &d);
     }while(d<0);

     vd = d;
     b = 0;
     p = 1;

     while(d!=0){
        R = d%2;

        
        d = d/2;
        b =b + R*p;
        p = p*10;

     }

     printf("\n%d binaire en decimale est : %d ", vd, b);

     return 0;

}