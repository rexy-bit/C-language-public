#include <stdio.h>

int main(){
	float c, T;
	
	printf("\nEnter the number of copies you want to print : ");
	scanf("%f", &c);
	
	if(c <= 10){
		
		T = c*2;
		printf("\nThe total price is : %.2f", T);
	}else if(c > 10 && c <= 20){
		T = 10*2 - (c - 10)*1.5;
		printf("\nThe total price is : %.2f", T);
	}else if(c <= 30){
		T = 10*2 - 10*1.5 - (c - 20)*1;
		printf("\nThe total price is : %.2f", T);
	}
	
	return 0;
	
}
