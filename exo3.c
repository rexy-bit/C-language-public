#include <stdio.h>
main(){
	int x;
	int y;
	int power;
	
	printf("\nEnter a value for x : ");
	scanf("%d", &x);
	
	printf("\nEnter a value for y : ");
	scanf("%d", &y);
	
	power = pow(x,y);
	
	printf("\nX power Y is equal to : %d", power);
}
