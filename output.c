#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int finalvalue;
    

    printf("Enter th first number :");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    if(num1 == num2)
    {
        finalvalue = ( num1+num2 ) * 3;
        printf("\nThe final value is :%d", finalvalue);
    }else
    {
        finalvalue = num1 + num2;
        printf("\nThe final value is :%d", finalvalue);
       
    }

    
}