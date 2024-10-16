#include <stdio.h>
int main()
{
    double i ;
    printf("\nEntrez la moyenne :");
    scanf("%lf", &i);
    if(i >= 18)
    {
        printf("mention  excellent");
    }else if((i <= 18) && (i >= 15))
       {
        printf("mention tres bien");
       }else if((i <= 15) && (i >= 12))
            {
                printf("mention bien");
            }else if((i <= 12) && (i >= 10))
               {
                printf("passe");
               }else if(i < 10)
                  {
                    printf("ne passe pas");
                  }

        return 0;
}