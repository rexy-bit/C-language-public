#include <stdio.h>

int main(){
    int i;
    int n;
    int Nmin;
    int Nmax;
    int x;

    printf("Enter a positive integer :\n");
    scanf("%d", &n);while(n <= 0);

    if(n == 0){
        printf("The minimum number is 0\nThe maximun Number is 0");

        return n;
    }
    

    printf("Enter the number:\n");
    scanf("%d", &x);

    Nmin = x;
    Nmax = x;

    for(i=0; i<=n; i++){
        scanf("%d", &x);

        if(Nmax < x){
            Nmax = x;

        }else if(Nmin > x){
            Nmin = x;
        }

        
    } 

    printf("The minimum number is : %d\n The maximum number is : %d\n", Nmin, Nmax);

    return 0;
}