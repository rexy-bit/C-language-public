#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct Node
{
    int info;
    struct Node *next;

} Node;

void creation(Node **L)
{

    *L = NULL;

    Node *p, *end;
    int stop;

    do
    {

        p = malloc(sizeof(Node));
        printf("\nEnter a number : ");
        scanf("%d", &p->info);

        if (*L == NULL)
        {
            *L = p;
            end = p;
            p->next = *L;
        }
        else
        {
            end->next = p;
            end = p;
        }
        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);

    } while (stop != 0);

    end->next = *L;
}

void aff(Node **L)
{

    if (*L == NULL)
    {
        printf("\nEmpty List");
        return;
    }
    else
    {

        Node *p = *L;
        printf("\nThe List is : ");
        do
        {
            printf(" %d |", p->info);
            p = p->next;
        } while (p != *L);
    }
}

void delete(Node **L)
{

    int val;

    if (*L == NULL)
    {
        printf("\nEmptu List");
    }
    else
    {

        Node *p = *L, *q;
        printf("\nEnter a value to delete : ");
        scanf("%d", &val);
        q = p->next;

        do
        {

            if ((*L)->info == val)
            {

                Node *end = *L;

                do
                {
                    end = end->next;
                } while (end->next != *L);

                *L = (*L)->next;
                free(p);
                end->next = *L;
                p = *L;
                q = p->next;
            }
            else if (q->info == val)
            {
                if (q->next == *L)
                {
                    p->next = *L;
                    free(q);
                    return;
                }
                else
                {
                    p->next = q->next;
                    free(q);
                    q = p->next;
                }
            }
            else
            {
                p = q;
                q = q->next;
            }

        } while (q != *L);
    }
}

void sort(Node **L)
{

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        Node *p, *q;
        int temp;

        p = *L;
        do
        {

            q = p->next;
            do
            {
                if (p->info > q->info)
                {
                    temp = p->info;
                    p->info = q->info;
                    q->info = temp;
                }
                q = q->next;
            } while (q != *L);
            p = p->next;
        } while (p != *L);
    }
}

void insertBegin(Node **L)
{

    Node *p, *q;
    q = malloc(sizeof(Node));
    printf("\nEnter a value to insert : ");
    scanf("%d", &q->info);

    if (*L == NULL)
    {
        *L = q;
        q->next = *L;
    }
    else
    {

        p = *L;

        do
        {
            p = p->next;
        } while (p->next != *L);

        p->next = q;
        q->next = *L;
        *L = q;
    }
}

void insertEnd(Node **L)
{
    Node *p, *q;

    q = malloc(sizeof(Node));

    printf("\nEnter a value to insert at the end : ");
    scanf("%d", &q->info);

    if (*L == NULL)
    {
        *L = q;
        q->next = *L;
    }
    else
    {
        p = *L;

        do
        {
            p = p->next;
        } while (p->next != *L);

        p->next = q;
        q->next = *L;
    }
}

void represent(Node **L, int N)
{

    Node *p, *end;
    *L = NULL;

    if (N < 10)
    {
        p = malloc(sizeof(Node));
        p->info = N;
        p->next = *L;
    }
    else
    {

        while (N > 0)
        {
            int x = N % 10;
            N = N / 10;
            p = malloc(sizeof(Node));
            p->info = x;

            if (*L == NULL)
            {
                *L = p;
                end = p;
                p->next = *L;
            }
            else
            {
                end->next = p;
                p->next = *L;
                end = p;
            }
        }
    }
}

void disp(Node **L)
{
    Node *p = *L;

    printf("\nThe List is : ");
    do
    {

        printf(" %d |", p->info);
        p = p->next;
    } while (p != *L);
}

void insetBegin(Node **L)
{

    int val;

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        printf("\nEnter a value to insert : ");
        scanf("%d", &val);

        Node *p = *L, *q;

        do
        {

            p = p->next;
        } while (p != *L);

        q = malloc(sizeof(Node));
        q->info = val;

        p->next = q;
        q->next = *L;
        *L = q;
    }
}

void insertEnd2(Node **L)
{

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        Node *p = *L, *q;
        int val;

        printf("\nEnter a value to insert : ");
        scanf("%d", &val);

        do
        {
            p = p->next;
        } while (p != *L);

        q = malloc(sizeof(Node));
        q->info = val;
        p->next = q;
        q->next = *L;
        *L = q;
    }
}

void insertV1(Node **L)
{

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        int v1, v2;

        printf("\nENter v1 : ");
        scanf("%d", &v1);

        printf("\nEnter v2 : ");
        scanf("%d", &v2);

        Node *p = *L;
        bool find = false;

        while (p != NULL && !find)
        {
            if (p->info == v1)
            {
                find = true;
                Node *q = malloc(sizeof(Node));
                q->info = v2;
                q->next = p->next;
                p->next = q;
            }
            else
            {
                p = p->next;
            }
        }
    }
}


void creation(Node **L){


    Node *p, *end;

    *L = NULL;


    int stop;

    do{

        p = malloc(sizeof(Node));

        printf("\nEnter a number: ");
        scanf("%d", &p->info);

        if(*L == NULL){
            *L = p;
            end = p;
            p->next = *L;
        }else{
            end->next = p;
            p->next = *L;
            end = p;
        }

        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);

    }while(stop != 0);

}
int main()
{

    Node *L;

    represent(&L, 81945);
    aff(&L);
    insertV1(&L);
    aff(&L);

    return 0;
}