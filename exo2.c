#include <stdio.h>
main(){
	
	float larg;
	float longe;
	float s;
	float p;
	
	printf("\nEnter larg : ");
	scanf("%f", &larg);
	
	printf("\nEnter long : ");
	scanf("%f", &longe);
	
	s= longe*larg;
	p= (longe + larg)*2;
	
	printf("The surface is : %.2f\nThe perimeter is : %.2f", s, p);
}
