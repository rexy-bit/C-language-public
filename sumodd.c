#include <stdio.h>
int main()
{
    int i = 1;
    int sumEven;
    int sumOdd;

    do{
        if(i % 2 == 0)
        {
            sumEven += i;
            i++;
        }else{
            sumOdd += i;
            i++;
          }
          
    
    } while(i <= 50);

        printf("sum of even numbers : %d\n", sumEven);
        printf("sum of odd numbers : %d\n", sumOdd);      
    
      
      

      return 0;

}