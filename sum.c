#include <stdio.h>
 
 int main(){
   
   double num1;
   double num2;
   double result;
   char operator;

   printf("Pick an operator ( + , - , * , /) :\n");
   scanf("%c", &operator);

   printf("Enter the value of number 1 :\n");
   scanf("%lf", &num1);

   printf("Enter the value of number 2 :\n ");
   scanf("%lf", &num2);

   switch (operator){
    case  '+':
      result = num1 + num2;
      printf("\nThe result is : %lf", result);
      break;

    case '-':
      result = num1 - num2;
      printf("\nTHe result is : %lf", result);
      break;

    case '*':
      result = num1 * num2;
      printf("\nTHe result is : %lf", result);

      break;


    case '/':
    if(num1 != 0 && num2 != 0){
        result = num1 / num2;
        printf("\nThe result is : %lf", result );

    }else{
        printf("\nError , impossible to devide by 0");
    }

    break;

    default :
       printf("\nError : invalid operator, please choose one of the four operator presented ");

   }

   printf("End of switch statement");


   return 0;


 }