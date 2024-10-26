#include <stdio.h>

main(){
	int age;
	char s;
	
	printf("\nVeillez entrez votre sexe (h pour homme ou f pour femme): ");
	scanf("%c", &s);
	
	printf("\nEntrez votre age : ");
	scanf("%d", &age);
	
	
	if(s == 'h' && age > 20 || s == 'f' && age >= 18 && age <= 35){
		printf("\nVous payez les impots");
	}else{
		printf("\nVous ne payez pas les impots");
	}
	
}
