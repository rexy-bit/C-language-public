#include <stdio.h>

int main(){

    int lines, i,r;


    printf("\nEnter a number of lines that must be of course positive : ");
    scanf("%d", &lines);

    for(i = 1; i <= lines; i++){
        for(r = 1;r<=i;r++){

            printf("*");
        }

        printf("\n");
    }

    return 0;
     
    }