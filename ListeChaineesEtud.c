#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef struct Node{
    char name[60];
    int age;
    struct Node* next;
}Node;


void creation(Node** L){

    L = NULL;
    int stop;
    Node* p;

    do{

        p = (Node*) malloc(sizeof(Node));

        printf("\nEnter the name : ");
        scanf("%s", &p->name);

        do{
            printf("\nEnter age : ");
            scanf("%d", &p->age);
        }while(p->age <= 0 || p->age > 100);

        p->next = L;
        L = p;

        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);

    }while(stop != 0);


}

void affNode(Node** L){

    Node* p;

    if(L == NULL){
      printf("\nListe L is empty.");
    }else{

        p = L;

        while(p != NULL){
            printf("\n\nName : %s", p->name);
            printf("\nAge : %d", p->age);

            p = p->next;
        }

    }
}

void addNode(Node** L){

    Node* p;
    Node* q;

    int pos;
    

    if(L == NULL){
        printf("\nEmpty List.");
        return;
    }

     do{
        printf("\nEnter the position to delete : ");
        scanf("%d", &pos);
     }while(pos <= 0);

     int N = 0;

     p = L;

     while(p != NULL){
        N++;
        p = p->next;
     }

     if(pos > N){
        printf("\nPosition not found");
     }else{
 
        q = (Node*) malloc(sizeof(Node));

        printf("\nName : ");
        scanf("%d", &q->name);

        printf("\nAge : ");
        scanf("%d", &q->age);

        if(pos == 1){
          q->next = L;
          L = q;
        }else if(pos == 2){
            q->next = L->next;
            L = q;
        }else{
            int i;
            p = L;
            for(i = 1;i<(pos - 2);i++){
                p = p->next;
            }

            q->next = p->next;
            p->next = q;
        }
     }
    
}

void deleteNode(Node* L){

    char name[60];

    printf("\nEnter the name to delete : ");
    scanf("%s", &name);

    bool find = false;

    Node* p = L;

    while(L->name == name){
        L = L->next;
        free(p);
        p = L;
    }

    p = L;
    Node* q = L->next;

    while(q != NULL){
        if(q->name == name){
            p->next = q->next;
            free(q);
            q = p->next;
        }else{
            p = q;
            q = q->next;
        }
    }
}
int main(){

    Node* L;


}