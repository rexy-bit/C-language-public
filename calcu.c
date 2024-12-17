#include <stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+,-,*,/) :");
    scanf("%c", &operator);
    
    printf("Enter number 1 :");
    scanf("%lf", &num1);

    printf("Enter number 2 :");
    scanf("%lf", &num2);
    
    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("\nresult : %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult : %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult : %lf", result);
            break;
        case '/':
            result = num1 / num2;
            if((num1 != 0) && (num2 != 0))
            {
                printf("\nresult : %lf", result);
            }
            else {
                    printf("Math error : impossible to devide by 0\n");
                 }
            break;
        default :
            printf("Envalide operator : please enter a correct operator");
            break;

        printf("end of switch statement");



    }


  return 0;
}