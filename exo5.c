#include <stdio.h>
int main(){

    int i,n,r;


        printf("\nEnter the number of repetitions : ");
        scanf("%d", &n);
    

    for(i = 1;i<=n;i++){

        for(r = 1;r<=i;r++){
            printf("*");
        }


        printf("\n");
        
    }

    return 0;

    
}