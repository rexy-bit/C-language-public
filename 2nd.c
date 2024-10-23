#include <stdio.h>
int main(){
	float a, b, c, d, x1, x2, x0;
	
	printf("\Enter the values of : a, b, c : ");
	scanf("%f %f %f", &a, &b, &c);
	
	d = b*b - 4*a*c;
	
	if(d > 0){
		printf("\nThe equation has two solutions : ");
		x1 = (-b + sqrt(d))/(2*a);
		
			x2 = (-b - sqrt(d))/(2*a);
			
			printf("\nThe value of x1 and x2 : ");
			printf("\nx1 = %.2f", x1);
			printf("\nx2 = %.2f", x2);
			
	}else if(d = 0){
		printf("The equantion has only one solution in R : ");
		
		x0 = -b/(2*a);
	}else if(d < 0){
		printf("\nThe is no solution in R");
	}
	
	return 0;
}
