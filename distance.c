#include <stdio.h>
#include <math.h>

int main(){
	float Xa, Xb, Ya, Yb;
	
	float d;
	
	printf("\nEnter Xa : ");
	scanf("%f", &Xa);
	
	printf("\nEnter Ya : ");
	scanf("%f", &Ya);
	
	printf("\nEnter Xb : ");
	scanf("%f", &Xb);
	
	printf("\nEnter Yb : ");
	scanf("%f", &Yb);
	
	d = sqrt(pow((Xb - Xa), 2) + pow((Yb - Ya), 2));
	
	printf("La distance entre A et B est : %.2f", d);
	
	return 0;
}
