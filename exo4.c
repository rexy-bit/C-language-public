#include <stdio.h>

main(){
	double num1;
	double num2;
	double sum, min, tim, div;
	
	
	printf("\nEnter number 1 : ");
	scanf("%lf", &num1);
	
	printf("\nEnter number 2 : ");
	scanf("%lf", &num2);
	
	sum = num1 + num2;
	min = num1 - num2;
	tim = num1*num2;
	div = num1/num2;
	
	printf("The addition is : %.2lf\n the substraction is : %.2lf\nThe multiplication is : %.2lf\n the division is : %.2lf", sum, min, tim, div);
	
}
