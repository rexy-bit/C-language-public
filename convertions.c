#include <stdio.h>
int main(){
    double hours;

    char unit;
    

    printf("\nEnter the time in hours :");
    scanf("%lf", &hours);

    printf("Choose the unit you want to convert to : \n");
    scanf(" %c", &unit);

    if(unit == 's'){
        printf("\n%.2lf hours, is equal to %.2lf seconds.", hours, hours*3600);
    }else if(unit == 'm'){
        printf("\n%.2lf hours, is equal to %.2lf minutes.", hours, hours*60);
    }else{
        printf("\nError choose the correct unit you want to convert to 's' for seconds or 'm' for minutes.");
    }

   return 0;
}