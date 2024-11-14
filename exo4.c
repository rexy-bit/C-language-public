#include <stdio.h>
#include <stdbool.h>


int main(){

    int A,i;
    bool p;

    printf("\nVeillez entrer un entier A : ");
    scanf("%d", &A);

    if(A == 1){
        p = false;
    }else{
        p = true;

    }
    for(i = 2;i<=A - 1;i++){
        if(A%i == 0){
            p = false;

        }
    }

    if(p == true){
        printf("\n%d est premier ", A);
    }else{
        printf("\n%d n'est pas premier ", A);
    }

    return 0;


}