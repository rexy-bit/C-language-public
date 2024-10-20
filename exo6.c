#include <stdio.h>

main(){
	float r;
	float vol;
	
	printf("\nEnter a value for r in meters : ");
	scanf("%f", &r);
	
	vol = 4*3.14*r*r*r/3;
	
	printf("The volume is : %.2f meters cube", vol);
	
}
