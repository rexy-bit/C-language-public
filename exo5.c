#include <stdio.h>
int main(){
	
	float note1, note2, note3, note4, note5;
	float sum, moy;
	
	printf("\nEntrez la note 1 : ");
	scanf("%f", &note1);
	
	printf("\nEntrez la note 2 : ");
	scanf("%f", &note2);
	
	printf("\nEntrez la note 3 : ");
	scanf("%f", &note3);
	
	printf("\nEntrez la note 4 : ");
	scanf("%f", &note4);
	
	printf("\nEntrez la note 5 : ");
	scanf("%f", &note5);
	
	sum = note1 + note2 + note3 + note4 + note5;
	
	printf("\nLa somme est : %.2f", sum);
	
	moy = sum/5;
	
	printf("\nLa moyenne est : %.2f", moy);
	
	return 0;
	
}
