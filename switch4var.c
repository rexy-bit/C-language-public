#include <stdio.h>
int main(){
	int a,b,c,d;
	
	printf("\nEnter numbers a, b and c : ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("\nThe values of a, b and c before switching are : %d\n%d\n%d ", a, b, c);
	
	d = a;
	a = c;
	c = b;
	b = d;
	
	printf("\nThe values of a, b and c after switching are : %d, %d, %d", a, b, c);
	
	return 0;
}
