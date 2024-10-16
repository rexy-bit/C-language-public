#include <stdio.h>
main(){
     char firstName[50];
     char lastName[50];
     char  section[50];

     printf("Enter Your Name :");
     scanf("%49s", &firstName);

     printf("Enter your last name :");
     scanf("%49s", &lastName);

     printf("Enter your section :");
     scanf("%49s", &section);

     printf("Name : %s\nLast name : %s\nSection : %s\n", firstName, lastName, section);
}