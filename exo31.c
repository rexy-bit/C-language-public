#include <stdio.h>

int main(){
    int age, i, t;

    printf("\nVeillez entrer l'age de Amal : ");
    scanf("%d", &age);

    t = 0;

    for(i = 1; i <= age; i++){
        t = t + 500 + 3*i;
    }

    printf("\nLa somme totale dans le comte bancaire de Amal est : %d ", t);

    return 0;

}