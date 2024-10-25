#include <stdio.h>

main(){
	double litres;
	double ml;
	double m3;
	
	printf("\nEnter the value in Litres : ");
	scanf(" %lf", &litres);
	
	ml = litres*1000;
	
	m3 = litres/1000;
	
	printf("The value in litres is : %lf\nThe value in  ml in : %lf\nThe value in Square meters is : %lf\n", litres, ml, m3);
	

}
