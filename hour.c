#include <stdio.h>

main(){
	int ts;
	int h,m,s,v;
	
	printf("\nEnter the time in seconds : ");
	scanf("%d", &ts);
	
	h = ts/3600;
	
	v = fmod(ts, 3600);
	
	m = v/60;
	

	
	s = fmod(v, 60);
	
	printf("\nThe time as hours , minutes and seconds is : %d hours : %d minutes : %d seconds", h, m, s);
	
	
}
