#include <stdio.h>
#include <math.h>

int main(){
	
	printf("\n*********************************************************************************");
	printf("\nHere is a professioal algorithme that calculates a 2nd degree equation in 'R' : ");
	printf("\n*********************************************************************************");
	
	double X1, X2, a, b, c, D, X0;
	
	printf("\nEnter a value for a : ");
	scanf("%lf", &a);
	
	printf("\nEnter a value for b : ");
	scanf("%lf", &b);
	
	printf("\nEnter a value for c : ");
	scanf("%lf", &c);
	
	D = b*b - 4*a*c;
	printf("D = %.2lf", D);
	
    if(D > 0){
    	
    	
    	X1 = (-b + sqrt(D))/(2*a);
    	X2 = (-b - sqrt(D))/(2*a);
    	
    	printf("\nThe equantion has two solutions in R : ");
    	printf("\nX1 = %.2lf,", X1);
    	printf("\nX2 = %.2lf", X2);
	}else if(D == 0){
		
		X0 = -b/(2*a);
		
		printf("\nThe equantion has only One and only one solution in R : ");
		printf("X0 = %.2lf", X0);
		
		
	}else if(D < 0){
		printf("\nThere is no solution in R : ");
		
		
	}
	
	return 0;
	
}
