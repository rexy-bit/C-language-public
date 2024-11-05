#include <stdio.h>
#include <math.h>
main(){
	
	
	int t,h,m,s,d;
	
	printf("\nEnter the full time in seconds : ");
	scanf("%d", &t);
	
    h = t/3600;
    
    d = t%3600;
    
    m = d/60;
    
    s = d%60;
    
    printf("\nThe %.2f in seconds , hours and minutes is : ", t);
    printf("\n%d h : %d m : %d s", h, m, s);
}
