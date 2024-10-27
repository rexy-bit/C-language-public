#include <stdio.h>

main(){
	int num;
	
	printf("\nEnter an integer number : ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("\n%d est paire", num);
	}else{
		printf("\n%d num est impaire", num);
	}
}
