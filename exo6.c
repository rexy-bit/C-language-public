#include <stdio.h>

int main(){

    int i,s,n;
/*
    s = 0;
    for(i = 0; i<4;i++){

        printf("\nENter an integer number : ");
        scanf("%d", &n);

         s += n;
    }

    printf("\nThe sum is : %d", s);
    */

  /*s = 0;
   i = 0;
   while(i < 4){
      printf("\nEnter the value of n : ");
      scanf("%d", &n);

      s += n;
      i++;
   }

   //printf("\nThe sum is : %d", s);

   */

  s = 0;
  i = 0;

  do{
    printf("\nEnter a positive integer n : ");
    scanf("%d", &n);

    s += n;
    i++;
  }while(i < 4);

  printf("\nThe sum is : %d", s);

    return 0;
}