#include <stdio.h>

int main(){
    int i,j,k,cpt;

    cpt = 0;

    for(i = 0;i<=100;i++){
        for(j=1;j<=i;j++){
             for(k=1;k<=j;k++){
                printf(".");
                cpt++;
             }
        }
      
    }

    printf("\n%d", cpt);


    return 0;
}