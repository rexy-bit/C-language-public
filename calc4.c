#include <stdio.h>

main(){
	double num1;
	double num2;
	double result;
	
	char operator;
	
	printf("choose an operator(+,-,*,/) :");
	scanf("%c", &operator);
	
	printf("Enter number 1 : ");
	scanf("%lf", &num1);
	
	printf("Enter number 2 : ");
	scanf("%lf", &num2);
	
	switch(operator){
		case '+':
			result = num1 + num2;
			printf("The result is %.2lf", result);
			break;
			
		case'-':
			result = num1 - num2;
			printf("The result is : %.2lf", result);
			break;
			
		case '*':
			result = num1 * num2;
			printf("The result is : %.2lf", result );
			break;
			
		case '/':
			
			if(num1 != 0 && num2 != 0){
				result = num1 / num2;
				printf("The result s : %.2lf", result );
			
				
			}else if(num1 == 0 || num2 == 0){
				printf("Math Error impossible to devide by zero\n");
			}
			
			break;
			
			default :
				printf("Math error ^lease enter correct operator");
				break;
	}
	
	return 0;
}
