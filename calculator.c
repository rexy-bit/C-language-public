#include <stdio.h>
 main(){

    double num1;
    double num2;
    double result;
    char operator;
    
    printf("choose an operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    
    printf("Enter number 1 :");
    scanf("%lf", &num1);
    
    printf("Enter number 2 :");
    scanf("%lf", &num2);
    
    switch(operator){
    	case '+':
    		result = num1 + num2;
    		printf("result is : %lf", result);
    		
    		break;
    		
    	case '-' :
    		result = num1 - num2;
    		printf("The result is : %lf", result);
    		
    		break;
    		
    	case '*':
    		result = num1 * num2;
    		printf("The result is : %lf", result);
    		
    		break;
    		
    	case '/':
    		if(num1 == 0 || num2 == 0){
    			printf("Math error impossible to devide by 0");
    			
			}else if(num1 != 0 && num2 != 0){
				result = num1 / num2;
				printf("The result is : %lf", result);
			}
			
			break;
			
		default :
			printf("Math error : please enter correct operator");
			
			break;
	}
	
	printf("\nEnd of switch statement");
	
    
    
    
   
    
    return 0;
    
	
	
}
