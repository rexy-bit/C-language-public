#include <stdio.h>

int main(){
	int x,y,z, s, p;
	
	printf("\nEnter a value for x and y : ");
	
	scanf("%d %d", &x, &y);
	
	if(x * y > 0){
		z = x;
		x = y;
		y = z;
		printf("\nThe values of x and y after switching are : %d\n %d\n", x, y);
	}else{
		s = x + y;
		p = x*y;
		x = s;
		y = p;
		
		printf("\nThe value of x is : %d\nThe value of y is : %d\n", x, y);
	}
	
	return 0;
}
