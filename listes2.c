#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


typedef struct Node{
    char name[60];
    int age;
    struct Node* next;
}Node;


void creation(Node** L){

    *L = NULL;

    Node* p;
    int stop;

    do{

        p = (Node*) malloc(sizeof(Node));
        printf("\nEnter name : ");
        scanf("%s", &p->name);

        do{
            printf("\nEnter age : ");
            scanf("%d", &p->age);
        }while(p->age <= 0);

        p->next = *L;
        *L = p;

        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);
    }while(stop != 0);

}

void affListe(Node* L){

    Node* p = L;

    while(p != NULL){
        printf("\n\nName : %s", p->name);
        printf("\nAge : %d", p->age);
        p = p->next;
    }

}

void deleteElement(Node** L){

    char name[60];
    
    printf("\nEnter the element to delete : ");
    scanf("%s", &name);

    Node* p = *L;

    while(p!=NULL && strcmp(p->name, name) == 0){
         
        *L = p->next;
         free(p);
         p = *L;
    }

    Node* q = p->next;

    while(q != NULL){
        if(strcmp(q->name, name) == 0){
            p->next = q->next;
            free(q);
            q = p->next;
        }else{
            p =q;
            q = q->next;
        }
    }


    affListe(*L);



}

int main(){

    Node* L;

    creation(&L);
    affListe(L);
    deleteElement(&L);
    
    return 0;
    
}