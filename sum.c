#include <stdio.h>
int main()
{
    int num;
    int sum = 0;

    do{
        printf("Enter an integer number of your choise (enter 0 to stop) :\n");
        scanf("%d", &num);

        if( num > 0 ){
        sum+=num;
        printf("The sum of positive numbers added is : %d\n", sum);
        }else if( num < 0){
            printf("Negative integers are not addes .ignored.\n");
        }

    }while( num =! 0);
     printf("The sum of the numbers added is :%d\n", num);


     return 0;

}
   