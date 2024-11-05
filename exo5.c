#include <stdio.h>

main(){
	
	float s,p,r;
	float pi = 3.14;
	
	printf("\nEnter a value for r : ");
	scanf("%f", &r);
	
	s = 2*pi*pow(r, 2);
	
	p = 2*pi*r;
	
	printf("\nThe Surface is : %.2f, \nThe sirc is : %.2f", s,p);
}
