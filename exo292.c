#include <stdio.h>

int main(){

    int n;
    float S,i,j;

    printf("\nEnter an integer : ");
    scanf("%d", &n);

    j = 1;
    S = 0;

    for(i = 1;i<=n;i++){
        S = S + pow(j, 2);
        j = j + 2;

    }

    printf("\nThe sum of powered first %d integers is : %.2f", n, S);



    return 0;
}