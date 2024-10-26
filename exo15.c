#include <stdio.h>

main(){
	int age;
	
	printf("\nEntrez l\'age de votre enfant : ");
	scanf("%d", &age);
	
	if(age < 6){
		printf("\nBebe");
	}else if(age == 6 || age == 7){
		printf("\nPoussin");
	}else if(age == 8 || age == 9){
		printf("\nPupille");
	}else if(age == 10 || age == 11){
		printf("\nMinime");
	}else if(age >= 12){
		printf("\nCadet");
	}
}
