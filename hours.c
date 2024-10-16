#include <stdio.h>
int main()
{
    int hours;
    int minutes;
    int Total;

    printf("\nEnter the hours :");
    scanf("%d", &hours);

    printf("Enter minutes :");
    scanf("%d", &minutes);

    Total = (hours * 60) + minutes;
    printf("\nTotal minutes is : %d minutes", Total);
}