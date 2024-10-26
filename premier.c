#include <stdio.h>

int main(){
	char firstName[100], lastName[100], section[100];
	int g;
	
	printf("\nEnter your First name : ");
	scanf("%s", &firstName);
	
	printf("\nEnter your Last name : ");
	scanf("%s", &lastName);
	
	printf("\nEnter your section : ");
	scanf("%s", &section);
	
	printf("\nEnter your your groupe : ");
	scanf("%d", &g);
	
	printf("First name : %s\nLast name : %s\nSection : %s\nGroupe : %d", firstName, lastName, section, g);
	
	return 0;
	
}
