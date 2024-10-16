#include <stdio.h>

main(){
	float deg;
	float rad;
	
	printf("Enter the degree in degree : ");
	scanf("%f", &deg);
	
	rad = (deg*6.26)/360;
	
	printf("The result in rad is : %.2f", rad);
	
}
