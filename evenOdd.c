#include <stdio.h>
int main(){
    double num;

    printf("Enter an integer number of your choise :");
    scanf("%lf", &num);

    
    if(num % 2 == 0){
        printf("Enter the number you entered is even\n",num);
    }else if(num % 2 == 0){
        printf("The number you entered is odd\n", num);
    }
    

    return 0;
}