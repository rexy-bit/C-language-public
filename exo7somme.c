#include <stdio.h>
#include <math.h>

int main(){

   int n,R,vn,s;

    do
    {
        printf("\nVeillez entrez un entier positif : ");
        scanf("%d", &n);
    }while (n<0);

    s = 0;
    vn = n;

    while(n!=0){
        R = n%10;

        s = s + R;
        n = n/10;

    }

    printf("\nLa somme des entier qui composent %d est : %d", vn, s);


    return 0;
    
    
    
}

