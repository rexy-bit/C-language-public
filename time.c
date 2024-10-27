#include <stdio.h>
#include <math.h>

main(){
	
	int h, m, s, t, d;
	
	printf("\nEnter the time in seconds : ");
	scanf("%d", &t);
	
	h = t/3600;
	
	m = (t%3600)/60;
	
	s = (t%3600)%60;
	
	printf("\nThe time in hours minutes and seconds is : %dh : %dm : %ds", h, m, s);
	
	
	
}
