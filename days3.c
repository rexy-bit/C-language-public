#include <stdio.h>
int main()
{
    enum days {sun = 1, mon = 2, tue = 3, wed =4, thu = 5, fri = 6, sat = 7 };
    int  today = 8;
    if(today == 6 | today == 7 )
    {
       printf("its the weekend ! :)\n");
    }else{
            printf("I have to work to day :(\n ");
         }
    return 0;
}