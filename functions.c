#include <stdio.h>

int main(){
   int arr[]={6,3,1,8,4};
   int* p=arr;
   p += 3;
   printf("%d", *p);

   return 0;

}