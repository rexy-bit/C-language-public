#include <stdio.h>
int main()
{
    double Length;
    double Width;
    double Area;

    printf("\nEnter Length in meter :");
    scanf("%lf", &Length);

    printf("\nEnter width in meter :");
    scanf("%lf", &Width);

    Area = Length * Width;
    printf("\nThe Area in square meters is :%lf square meters", Area);


    return 0;
}