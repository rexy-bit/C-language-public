#include <stdio.h>

main(){
	
	int x,y,z;
	
	printf("\nEnter x and y : ");
	scanf("%d%d", &x, &y);
	
	printf("\nThe values of before switching : x = %d, y = %d", x, y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\nThe values after switching are : x = %d, y = %d", x, y);
	
	
}
