#include <stdio.h>

main(){
	
	int num;
	
	printf("\nEntrez un chiffre ( 6, 4, 8, 2) pour determiner l'itineraire de la personne : ");
	scanf("%d", &num);
	
	switch(num){
		case 6:
			
			printf("\nLa personne va a droite");
			break;
			
		case 4:
			printf("\nLa personne va a gauche");
			break;
			
		case 8:
			printf("\nLa personne va en haut");
			break;
			
		case 2:
			printf("\nLa personne va en bat");
			break;
			
		defaut:
			printf("\nErreur veuillez entrez un des numeros indiquer dans la premiere instruction ");
			break;
			
	}
}
