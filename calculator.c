#include <stdio.h>

main(){
    double num1;
    double num2;
    double result;

    char operator;

    printf("Choose an operator to your calculation(+ , -,/, *) :\n");
    scanf("%c", &operator);

    printf("Enter number 1 :\n");
    scanf("%lf", &num1);

    printf("Enter number 2 :\n");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;

        printf("The result is : %.2lf\n", result);
        break;

        case '-':
        result = num1 - num2;
        printf("the result is : %.2lf", result);

        break;

        case '*':
         
         result = num1*num2;
         printf("the result is : %.2lf", result );

         break;

         case '/':

           if( num1 == 0 || num2 == 0){
            printf("Math Error because devision can not be done by the number 0\n");

           }else{
            result = num1/num2;
            printf("The result is : %.2lf", result);
           }

           break;

           default:
           printf("Invalid operator : Enter the correct operator\n");
   }

   printf("End of switch statement");
}