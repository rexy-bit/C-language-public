#include <stdio.h>

main(){
	int c;
	float p,T;

     printf("\nEntrez la categorie de votre produit (A, B, C) : ");
	 scanf("%c", &c);
	 
	 printf("\nSaisissez le prix de votre produit : ");
	 scanf("%f", &p);	
	 
	 printf("\nLe prix avant la TVA est : %.2f Euros", p);
	 
	 if(c = 'A'){
	 	T = p + ((p*7)/100);
	 	
	 }else if(c = 'B'){
	 	T = p + ((p*20)/100);
	 }else if(c = 'C'){
	 	T = p + ((p*25)/100);
	 }
	 
	 
	 printf("                                      ");
	 
	 printf("\nThe total price is after TVA : %.2f", T);
	 
	 }
