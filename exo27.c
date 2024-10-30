#include <stdio.h>

main(){
	int n,S,i;
	
	printf("\nEntrez un nombre  n : ");
	scanf("%d", &n);
	
	S = 1;
	for(i = 1;i<= n;i++){
		S = S + pow(10, i);
		
	}
	
	printf("\nLa valeur finale de S est : %d", S);
	
}
