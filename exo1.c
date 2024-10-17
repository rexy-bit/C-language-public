#include <stdio.h>
main(){
	char firstName[100];
	char  lastName[100];
	char section[100];
	
	printf("\nEnter your first name : ");
	scanf("%s", &firstName);
	
	printf("\nEnter your Last Name : ");
	scanf("%s", &lastName);
	
	printf("\nEnter your section : ");
	scanf("%s", &section);
	
	printf("****\nFirst Name : %s\nLast Name : %s\nSection : %s\n****", firstName, lastName, section);
	
}
