#include <stdio.h>

int main(){

    int i,j,lines;

    printf("\nEnter the number of lines you want to write : ");
    scanf("%d", &lines);

    for(i = 1; i <= lines; i++){
        for(j = 1;j<=i;j++){
            printf("*");
        }

        printf("\n");

    }
    
    return 0;

}