#include <stdio.h>

int main(){
	int x,y;
	
	printf("\nEnter a value for x and y : ");
	scanf("%d %d", &x, &y);
	
    if(x * y > 0 || x * y< 0){
    	printf("\nx and y have the same sign ");
	}else{
		printf("\nx and y have different signs");
	}
	
	return 0;
	
}
