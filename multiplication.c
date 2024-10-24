#include <stdio.h>

int main(){
	int n,i;
	
	printf("\nEntrer la table de multiplication que vous voulez effectuer : ");
	scanf("%d", &n);
	
	for(i = 0; i <= 10; i++){
		printf("%d * %d = %d,\n", n,i,n*i);
		printf("******************\n");
		
	}
	
	return 0;
}
