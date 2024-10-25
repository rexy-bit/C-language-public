#include <stdio.h>

int main(){
	int A,B;
	
	printf("\nEnter number A : ");
	scanf("%d", &A);
	
	printf("\nEnter number B : ");
	scanf("%d", &B);
	
	printf("\nThe values of A & B before switching are : A = %d, B = %d", A, B);
	
	A = B + A;
	B = A - B;
	A = A - B;
	
	printf("\nThe values after switching are : A = %d, B = %d", A, B);
	
	return 0;
	
}
