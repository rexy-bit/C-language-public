#include <stdio.h>
/// @brief 
/// @return 
int main()
{
    enum months {jan = 1,feb = 2,mar = 3,apr = 4,may = 5,jun = 6,jul = 7,aou = 8,sep = 9,oct = 10,nov = 11,dec = 12 };
    int month;
    printf("Enter the number of the month :\n");
    scanf("%d", &month);

    if((month == 12) || ( month == 1) || (month == 2))
    {
        printf("Its winter , its very cold outside !!\n");
    }else if((month == 3) || (month == 4) || (month == 5 ))
          {
            printf("Its spring !! the flowers are beautiful\n");
          }else if((month == 6) || (month == 7) || (month == 8))
         { 
            printf("Its summer let's go to the beach !!\n");
         }else if((month == 9) || (month == 10) || (month == 11))
         {
            printf("Its autumn !!, we gotta get back to school :(\n");
         }else{
                 printf("Error :Invalid month\n");
              }


     return 0;
             
         


}