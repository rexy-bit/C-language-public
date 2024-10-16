#include <stdio.h>
main(){
	float area, circ;
	float r;
	
	printf("Enter a value of r : ");
	scanf("%f", &r);
	
	area = 2*3.14*r;
	
	circ = 2*3.14*r*r;
	
	printf("The area is : %.2f\n", area);
	
	printf("The circumference is : %.2f", circ);
	
	
}
