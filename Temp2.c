#include <stdio.h>
int main()
{
    char unit;
    float temp;
    
    printf("\nIs the temperature in (C) or (F) ? :");
    scanf("%c", &unit);

    if(unit == 'C')
    {
        printf("\nEnter the teperature in celcius :");
        scanf("%f", &temp);
        temp = temp*1.8 + 32;
        printf("\nThe temperature in fernheit is : %.1f", temp);
    }else if(unit == 'F')
      {
        printf("\nEnter the temperature in Fernheitn :");
        scanf("%f", &temp);
        temp = (temp - 32)/1.8;
        printf("\nThe temperature in celsius : %.1f", temp);
      }else{
              printf("\n %c is not a valide unit of measurment", unit);
           }

          
     return 0;
}