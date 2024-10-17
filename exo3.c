#include <stdio.h>
main(){
	
	float deg;
	float rad;
	
	printf("\nEnter the value in degrees : ");
	scanf("%f", &deg);
	
	rad = (deg*6.26)/360;
	
	printf("The value in rad is : %.2f", rad);
	
	
}
