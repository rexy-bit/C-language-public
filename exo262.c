#include <stdio.h>

int main(){
	
	int n;
	
	float S, i;
	
	
	printf("\nEntrez une valeur pour n : ");
	scanf("%d", &n);
	
    S = 0;
    
    for(i = 1; i<=n; i++){
    	S = S + 1/i;
    	
    	printf("\nLa valeur de la somme est : %.2f", S);
    	
	}
	
	
	return 0;
}
