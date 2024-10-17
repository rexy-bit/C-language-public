#include <stdio.h>
main(){
	float r;
	float area;
	float circ;
	
	printf("\nEnter value for r : ");
	scanf("%f", &r);
	
	area = 2*3.14*r*r;
	
	circ = 2*3.14*r;
	
	printf("The area is : %.2f \n", area);
	printf("The circ is : %.2f\n", circ);
}
