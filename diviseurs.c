#include <stdio.h>

int main(){

    int n,i,p;

    printf("\nVeillez entrer la table que vous voulez calculer : ");
    scanf("%d", &n);


    p = 1;
    for(i=0;i<=10;i++){
        p = n*i;

        printf("\n%d * %d = %d", n, i, p);
    }

    return 0;
}

