#include <stdio.h>

int main(){
    int i,x,d;

    do{

       printf("\nEntrez un entier x : ");
       scanf("%d", &x);

    }while(x <= 0);

    d = x/2;

    printf("\nLes diviseurs de X sont : ");



    for(i = 1; i<= d; i++ ){
        if(x%i == 0){
            printf("\n%d", i);
        }
    }

    printf("\n%d", x);

    return 0;

    

}