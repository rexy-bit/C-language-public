#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter a value for a : ");
	scanf("%d", &a);
	
	printf("Enter a value for b : ");
	scanf("%d", &b);
	
	printf("\nThe values before switching are :\n a = %d\nb = %d", a, b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nThe values of a and b after switching are : \na= %d\n b = %d", a, b);
	
	return 0;
}
