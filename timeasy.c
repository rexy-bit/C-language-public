#include <stdio.h>

main(){
	
	int h,m,s,t;
	
	printf("\nEnter the time in seconds : ");
	scanf("%d", &t);
	
	h = t/3600;
	m = t/60;
	t = t;
	
	printf("\n%d in hours : %d", t, h);
	printf("\n%d in minutes : %d", t, m);
	printf("\n%d in seconds is : %d", t,t);
	
	
	}
