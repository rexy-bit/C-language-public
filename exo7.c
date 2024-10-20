#include <stdio.h>
main(){
	
	int A,B,T;
	
	printf("\nEnter a value for A : ");
	scanf("%d", &A);
	
	printf("\nEnter a value for B : ");
	scanf("%d", &B);
	
	printf("\nBefore switch : \nA = %d,\nB = %d", A, B);
	
	T = A;
	A = B;
	B = T;
	
	printf("\nThe value of A is : %d,\nThe value of B is : %d", A, B);
	
}
