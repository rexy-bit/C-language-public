
#include <stdio.h>

int main(){

    int T[4]={0,1,2,3};

    int *p;
    p = &T;

    *(T+1)=11;
    printf("%d\n", T[1]);
    
    


   return 0;
}