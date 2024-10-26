#include <stdio.h>

main(){
	
	float moy;
	
	printf("\nEntrez votre moyenne : ");
	
	
		scanf("%f", &moy);
	
	
	if(moy >= 18){
		printf("\nMontion Excellent : )");
	}else if(moy >= 15 && moy < 18){
		printf("\nMontion bien : )");
	}else if(moy >= 12 && moy < 15){
		printf("\nMontion bien ");
	}else if(moy >= 10 && moy < 12){
		printf("\nPassable");
	}else if(moy < 10){
		printf("\nInsuffisant");
	}
}
