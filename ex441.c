#include <stdio.h>

int main(){

    int S,n;

    printf("\nPlease neter a number n : ");
    scanf("%d", &n);

    S = 0;
    while(n!=0){
        S = S + n;
        printf("\nENter a number n : ");
        scanf("%d", &n);
    }

    printf("\nThe sum is : %d", S);

    return 0;

    
}