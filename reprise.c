#include <stdio.h>
int main()
{
    double number1;
    double number2;

    printf("Enter number 1 :");
    scanf("%lf", &number1);


     printf("Enter number 2 :");
     scanf("%lf", &number2);


    if(number1>number2)
    {
        printf("number 1 is greater than number 2/n");
    }else if(number1<number2)
      {
        printf("number 1 is enferior than number 2/n");
      }else{
        printf("number 1 equals number 2/n");
      }


      return 0;

}
