#include <stdio.h>

int main(){
    int num;

    printf("Enter an integer number :");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even", num);
    }else if(num % 2 != 0){
        printf("%d is odd", num);
    }else{
        printf("Invalid input! Please check that you entered an integer number :)");
    }

    return 0;
}