#include <stdio.h>

int main(){
	float R1, R2, R3;
	
	float Rser;
	float Rpar;
	
	
	printf("\nEnter R1 : ");
	scanf("%f", &R1);
	
	printf("\nEnter R2 : ");
	scanf("%f", &R2);
	
	printf("\nEnter R3 : ");
	scanf("%f", &R3);
	
	Rser = R1 + R2 + R3;
	
	Rpar = (R1*R2*R3)/(R1*R2 + R1*R3 + R2*R3);
	
	printf("\nLa resistance sur une ligne est : %.2f", Rser);
	
	printf("\nLa resistance en parallele est : %.2f", Rpar);
	
	return 0;
	
	
}
