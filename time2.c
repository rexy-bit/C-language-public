#include <stdio.h>

main(){
	
	int h, m, s, T;
	
	printf("\nEnter the time in seconds : ");
	scanf("%d", &T);
	
	
	h = T/3600;
	
	m = (T%3600)/60;
	
	s = (T%3600)%60;
	
	printf("\nThe time is : %dh : %dm : %ds", h, m, s);
	
	
}
