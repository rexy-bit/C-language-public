#include <stdio.h>
#include <stdbool.h>

int main(){
    int x,i,d;
    bool p;

    do{
        printf("\nENter a positive integer x : ");
        scanf("%d", &x);
    }while(x<0);

    if(x == 1){
        p = false;
    }else{
        p = true;
    }

    d = x/2;
    for(i = 2;i<=d;i++){
        if(x % i != 0){
           p = true;
        }else{
            p = false;
        }
    }

    if(p == true){
        printf("\n%d est premier", x);
    }else if(p == false){
        printf("\n%d n'est pas premier", x);
    }


    return 0;


}