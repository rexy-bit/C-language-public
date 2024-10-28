#include <stdio.h>

main(){
	
	int i,n;
	
	printf("\nVeillez entrer un nombre entier : ");
	scanf("%d", &n);
	
	for(i=n+1; i<= n+10;i++){
		printf("\n%d", i);
	}
}
