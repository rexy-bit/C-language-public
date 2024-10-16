#include <stdio.h>

int main(){
    char name[100];
    char lastName[100];
    char section[100];

    printf("\nEnter your name :");
    scanf("%99s", &name);

    printf("\nEnter your last name :");
    scanf("%99s", &lastName);

    printf("\nEnter your section :");
    scanf("%99s", &section);

    printf("\nName : %s.\nLast Name : %s.\nSection : %s.", name, lastName, section);

}