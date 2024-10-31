#include <stdio.h>

main(){
    int n;
    float s,i;

    printf("\nEntrez une valeur pour n : ");
    scanf("%d", &n);

    s = 0;
    for(i = 1; i<= n;i++){
        s = s + 1/i;
    }

    printf("\nLa somme est : %.2f", s);
}