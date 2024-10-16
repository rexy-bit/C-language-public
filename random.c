#include <stdio.h>
int main(){
     double valueLitre;
     double valueMl;
     
     printf("Enter the value in Litres :");
     scanf("%lf", &valueLitre);

     valueMl = valueLitre*1000;

     printf("The value in ml is : %lf", valueMl);
}