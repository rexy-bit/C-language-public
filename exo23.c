#include <stdio.h>

main(){
	
	
	int year;
	
	printf("\nEnter l\'annee' : ");
	scanf("%d", &year);
	
	if((year%4 == 0 && year%100 != 0) || year%400 == 0 ){
		
		printf("\nL\'annee est bissextile");
	}else{
		printf("\nL\'annee n\'est pas dissextile ");
	}
	
}
