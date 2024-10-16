#include <stdio.h>
int main()
{
    enum days {Sun = 1,Mon = 2,Tue = 3,Wed = 4,The = 5,Fri = 6,Sat = 7};
    int today = Mon;
    
    if(today == Fri|| today == Sat)
    {
        printf("Today in weekend :)");
    }else{
        printf("I have to work today :(");
    }
}