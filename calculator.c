#include <stdio.h>

int main(){
  double num1,num2, result;

  char operator;

  printf("\nChoose an operator (+,-,*,/) : ");
  scanf("%c", &operator);

  printf("\nEnter number 1 : ");
  scanf("%lf", &num1);

  printf("\nEnter number 2 : ");
  scanf("%lf", &num2);

  switch(operator){

    case '+':
    result  = num1 + num2;
    printf("\nThe result is : %.2lf", result);
    break;

    case '-':
    result = num1 -  num2;
    printf("\nThe result is : %.2lf", result);
    break;

    case '*':
    result = num1*num2;

    printf("\nThe result is : %.2lf", result);
    break;

    case '/':
    if(num1 == 0 || num2 == 0){
      printf("\nMath error : impossible to devide by 0");
    }else if(num1 != 0 && num2 != 0){
      result = num1/num2;
      printf("\nThe result is : %.2lf", result);
    }
    break;

    default:
      printf("\nMath error insure that you entered the correct operator");
      break;

  }
  return 0;
}