#include <stdio.h>
main(){
	float sec;
	float min;
	float hours;
	
	printf("\nEnter time in seconds : ");
	scanf("%f", &sec);
	
	min = sec/60;
	hours = sec/3600;
	sec = sec;
	
	printf("Minutes : %.2f,\nHours : %.2f,\nSeconds : %.2f", min, hours, sec);
	
}


