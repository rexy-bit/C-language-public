#include <stdio.h>

main(){
	int n, i;
	
	printf("\nEnter an integer number n : ");
	scanf("%d", &n);
	
	for(i = n + 1; i <= n + 10; i++){
		printf("\n%d", i);
	}
}
