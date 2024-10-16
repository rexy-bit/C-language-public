#include <stdio.h>
int main()
{
    char unit;
    float Temp;

    printf("Is the number in Celsius (C) or in Ferenheit (F) :");
    scanf("%c", &unit);

    if(unit == 'F')
    {
        printf("\nEnter the temperature in Ferenheit :");
        scanf("%f", &Temp);
        Temp =(Temp - 32)/1.8;
        printf("\nThe temperature in celsius is : %f", Temp);

    }else if(unit == 'C')
       {
        printf("\nEnter the temperature in Celsius :");
        scanf("%f", &Temp);
        Temp = (Temp * 1.8) + 32;
        printf("\nThe temperature in Fernheit is : %f", Temp);
       }else{
           printf("\nError :Invalid unit:");
       }
    
 return 0;
    
}