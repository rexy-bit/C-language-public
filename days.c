
#include <stdio.h>

int main(){
	int i;
	
	printf("Enter a value for i :");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			printf("Sunday");
			break;
		
		case 2:
			printf("Monday");
			break;
			
		case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("Wendnesday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("Saturday");
			break;
			
		default:
			printf("Wrong number enter a number from 1 to 7");
			break;
	}
	
	return 0;
}
