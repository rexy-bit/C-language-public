#include <stdio.h>

main(){
	
	int n;
	
	float i,o;
	
	printf("\n1/1 + 1/2  1/3  1/4......1/n");
	printf("\nChoisissez un entier n : ");
	scanf("%d", &n);
	
	o = 0;
	
	for(i = 1;i<= n;i++){
		o = o + 1/i;
		printf("La valuer finale de o est : %.2f", o);
	}
	
	
}
