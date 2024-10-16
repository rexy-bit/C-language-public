#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double result;
    char operator;

    printf("Choose an operator (+,-,*,/) :" );
    scanf("%c", &operator);

    printf("Enter the first number :");
    scanf("%lf", &num1);

    printf("Enter the second number :");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("The resulf is : %lf", result);
            break;

        case'-':
            result = num1 - num2;
            printf("The result is : %lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("The result is : %lf", result);
            break;

        case'/':
            if((num1 == 0) || (num2 == 0))
            {
                printf("Error : impossible to devide by zero");

            }else{
                result = num1 / num2;
                printf("The result is :%lf",result);
            }
           break;

           default :
            printf("Error : please enter a valid operator ");
           
           break;

           printf("End of switch statement");

    }

    return 0;

}