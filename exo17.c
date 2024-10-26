#include <stdio.h>

main(){
	
	float a,b,c, d;
	float x1, x2, x0;
	
	printf("\nEnter the values of a, b, c : ");
	scanf("%f%f%f", &a, &b, &c);
	
	d = pow(b, 2) - 4*a*c;
	
	if(d > 0){
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		
		printf("\nThe equation has two solutions : x1 = %.2f\n, x2 = %.2f\n", x1, x2);
	}else if(d == 0){
		x0 = -b/(2*a);
		
		printf("\nThe equantion has one and only one solution in R : x0 = %.2f\n", x0);
	}else if(d < 0){
		printf("\nThe equantion has no solutions in R ");
	}
	
}
