#include <stdio.h>
int main()
{
    char unit;
    double mesure;

    printf("\nIs unit in litre (L) or square meter (S) ? :");
    scanf("%c", &unit);

    if(unit == 'L')
    {
        printf("\nEnter mesure in meter :");
        scanf("%lf", &mesure);
        mesure = mesure / 1000;
        printf("\nMesure in square meter is : %lf", mesure);
    }else if(unit == 'S')
      {
        printf("\nEnter mesure in square meter :");
        scanf("%lf", &mesure);
        mesure = mesure * 1000;
        printf("\nMesure in square meter in : %lf", mesure);
      }else{
        printf("\nInvalid unit");
      }

      
    return 0;
}