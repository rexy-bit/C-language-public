#include <stdio.h>
main(){
	double num1;
	double num2;
	double result ;
	char operator;
	
	printf("\nChoose an operator(+,-,/,*) : ");
	scanf("%c", &operator);
	printf("\nEnter number 1 : ");
	scanf("%lf", &num1);
	
	printf("\nEnter nuber 2 : ");
	scanf("%lf", &num2);
	
	switch(operator){
		case '+':
			result = num1 + num2;
			printf("The result is : %.2lf\n", result);
			
			break;
			
		case '-':
			result = num1 - num2;
			printf("The result is : %.2lf\n", result);
			break;
			
		case '*':
			result = num1*num2;
			printf("The result is : %.2lf\n", result );
			
			break;
			
		case '/':
			if(num1 == 0 || num2 == 0){
				printf("Math error impossible to devide by zero \n");
			}else if(num1 != 0 && num2 != 0){
				result = num1/num2;
				printf("The result is : %.2lf\n", result);
			}
			
			break;
			
		default:
			printf("Math error : please verify that you entered the correct operator\n");
			break;
			
			
			
	}
	
	printf("************************************\n");
	
	
	printf("End of switch statement :) \n");
}




