#include <stdio.h>
main(){
	int i;
	
	printf("Enter a number between 1 and seven : ");
	scanf("%d", &i);
	
	switch(i){
		case 1 :
			printf("Sunday");
			break;
			
		case 2 :
			printf("Monday");
			break;
			
		case 3 :
			printf("Tuesday");
			break;
			
		case 4 :
			printf("Wendnesday");
			break;
			
		case 5 :
			printf("Thursday");
			break;
			
		case 6 :
			printf("Friday");
			break;
			
		case 7 :
			printf("Saturday");
			break;
			
			default :
				printf("Wrong number please enter a number between 1 and 7");
				break;
			
	}
	
	return 0;
}
