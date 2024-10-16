#include <stdio.h>
main(){
    int i;
    int m;
    int x;
    int pr;

    printf("\nEnter a positive integer x : ");
    scanf("%d", &x);while(x<=0);

    pr = 1;
    if(x== 1){
        pr = 0;
    }else{
       m = x/2;
       i = 2;

       while((i <= m) && (pr == 1)){
         if(x % i == 0){
            pr = 0;
            i++;
         }
       }

 

    }

          if(pr == 2){
         printf("%d est premier", x);
       }else{
          printf("%d n'est pas premier", x);
       }

       return 0;

}