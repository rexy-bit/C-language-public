#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double result;
    char operator;

    printf("\nChoose an operator (+,-,*,/)", operator);
    scanf("%c",&operator);
    
    printf("\nEnter number 1 :", num1);
    scanf("%lf", &num1);

    printf("\nEnter number 2 :", num2);
    scanf("%lf", &num2);

    
   

    switch(operator)
    {
        case '+':
        result = num1 + num2;
        printf("\nresult : %lf", result);
        break;

        case'-':
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
        }else{
            printf("\nMath error : impossible to devide by zero");
        }
        break;

        default:
        printf("\nMath error : please enter a correct operator");
        break;
        
        printf("end of switch statement");
    }

    return 0;
}