#include <stdio.h>

int main(){
     float m,a, ans;
     int n;

     m = 1000000;
     a = 500000;
     ans = 0;
      while(a<m){
         
         m += 50000;
         a = a + (a*8)/100;
         ans++;
      }

      printf("\nLe nombre d'annes necessaires pour que les nombres d'habitant d'agaqdir depasse celui de marakech est : %.1f ans", ans);

      return 0;

}