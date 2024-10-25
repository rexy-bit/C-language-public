#include <stdio.h>

main(){
	int cop;
	float T;
	
	printf("\nEnterez le nombre de copies que vous souhaitez imprimer : ");
	scanf("%d", &cop);
	
	if(cop <= 10){
		T = cop*0.3;
		
	}else if(cop <= 30){
		T = 10*0.3 + (cop - 10)*0.25;
	}else if(cop > 30){
		T = 10*0.3 + 20*0.25 + (cop - 30)*0.2;
	}
	
	printf("\nLe montant total a payer est : %.2f Euros", T);
}
