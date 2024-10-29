#include <stdio.h>

main(){
	
	int i, n;
	
	printf("\nEntrez un entier n : ");
	scanf("%d", &n);
	
	i = n + 1;
     do{
     	
     	printf("\n%d", i);
     	i++;
	 }while(i <= n + 10);
}
