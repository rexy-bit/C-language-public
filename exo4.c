#include <stdio.h>

main(){
	
	int a,b,c,d;
	
	float av;
	
	printf("\nEnter a, b, c and d : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	av = (a + b + d + c)/4;
	
	printf("The average of a,b,c,d is : %.2f", av);
}
