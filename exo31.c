#include <stdio.h>


int main(){
    int age,i;
    float sum;

    printf("\nVEillez entrez l'age de amal : ");
    scanf("%d", &age);

    sum = 0;

    for(i = 1; i <= age; i++){
        sum = sum + 500 + 3*age;
    }



    printf("\nLa somme d'argent dans le compte est : %.2f", sum);

    return 0;
    

}