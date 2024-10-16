#include <stdio.h>
main(){
	char* firstName[100], lastName[100], Section[100];

    printf("\nEnter your first name : ");
	scanf(" %s", &firstName);
	
	printf("\nEnter your last name : ");
	scanf(" %s", &lastName)	;
	
	printf("\nEnter your section : ");
	scanf(" %s", &Section);
	
	
	printf("First name : %s\nLast name : %s\nSection : %s\n", firstName, lastName, Section);
	
	return 0;
	
}
