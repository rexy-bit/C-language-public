#include <stdio.h>

int main(){

    int num1, num2, result,operation,r;


    printf("\n1-Addition,\n2-Soustraction,\n3-Multiplication,\n4-Division,\n5-Reste de la division,\n6-Puissance");
    printf("\n\n");


    
   do{

        do{
    printf("\nChoisissez l'operation que vous voulez effectuer en entrant son chiffre : ");
    scanf("%d", &operation); 
    }while(operation>6 && operation < 1);

    
    printf("\nEnter number 1 : ");
    scanf("%d", &num1);

    printf("\nENter number 2 : ");
    scanf("%d", &num2);

    switch(operation){
        case 1 : 
           result = num1 + num2;
           printf("\n%d + %d = %d", num1, num2, result);
           break;

        case 2 : 
           result = num1 - num2;
           printf("\n%d - %d  = %d", num1, num2, result);
           break;

        case 3:
           result = num1 * num2;
             printf("\n%d * %d  = %d", num1, num2, result);

           break;

        case 4 : 
          if(num2 == 0){
             printf("\nMath error : impossible to devide by 0");

          }else {
            result = num1 / num2;
            printf("\nThe result is : %d", result);
            
          }
          break;
        
        case 5 : 
          result = num1 % num2;
          printf("\nThe result is : %d", result);
          break;

        case 6:
           result = pow(num1, num2);
           printf("\nThe result is : %d", result);
           break;

        


        default : 
           printf("\nMath error please verify your inputs ");
           break;

    }
          printf("\n\n");
          printf("\nVoulez vous continuer les operations (tapez 1 pour oui et 0 pour non): ");
          scanf("%d", &r);
          

           
    }while(r != 0);




    return 0;


}