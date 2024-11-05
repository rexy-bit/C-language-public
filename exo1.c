#include <stdio.h>

int main(){

	char name[100],firstName[100],section;
	
	int groupe;
	
	printf("\nEnter your first name : ");
	scanf("%s", &firstName);
	
	printf("\nEnter your last name : ");
	scanf("%s", &name);
	
	printf("\nEnter your section : ");
	scanf(" %c", &section);
	
	printf("\nEnter your groupe : ");
	scanf("%d", &groupe);
	
	printf("\nFirst name : %s,\nLast name : %s,\nSection : %c,\nGroupe : %d", name, firstName, section, groupe);
	
	
	return 0;
	
}
