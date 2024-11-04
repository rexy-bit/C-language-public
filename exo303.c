#include <stdio.h>
int main(){

    int x,d,i;

    printf("\nEntrer un entier x : ");
    scanf("%d", &x);

    d = x/2;

    printf("\nLes diviseurs de %d sont : ", x);

    for(i = 1; i <= d;i++){
        if(x%i == 0){
            printf("\n%d", i);
        }
    }

    printf("\n%d", x);
    
    return 0;


}