#include <stdio.h>
main(){
	int x;
	int y;
	int z;
	
	printf("\nEnter a value for X : ");
	scanf("%d", &x);
	
	printf("\nEnter a value for Y : ");
	scanf("%d", &y);
	
	printf("\nBefore switching X = %d, Y = %d", x, y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\nAfter switching X = %d, Y = %d", x, y);
	
    
}
