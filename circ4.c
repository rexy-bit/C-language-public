#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

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
            p->next = *L;
            end->next = p;
            end = p;
        }

        printf("\nEnter 0 to stop : ");
        scanf("%d", &stop);
    } while (stop != 0);
}

void aff(Node **L)
{

    Node *p;
    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        printf("\nList elements are : ");
        p = *L;

        do
        {

            printf(" %d |", p->info);
            p = p->next;

        } while (p != *L);
    }
}

void deleteLessThan(Node **L)
{

    Node *p, *q;

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        p = *L;
        Node *end = *L;

        do
        {
            end = end->next;
        } while (end->next != *L);

        q = p->next;

        do
        {

            if (p->info < 0)
            {
                *L = (*L)->next;
                end->next = *L;
                free(p);
                p = *L;
                q = p->next;
            }
            else
            {

                if (q->info < 0)
                {
                    p->next = q->next;
                    free(q);
                    q = p->next;
                }
                else
                {
                    p = q;
                    q = q->next;
                }
            }
        } while (q != *L);
    }
}

void deleteVal(Node **L, int val)
{

    Node *p, *q, *end;

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        p = *L;
        end = *L;
        q = p->next;

        int val;

        printf("\nEnter a value to delete : ");
        scanf("%d", &val);
        do
        {

            end = end->next;

        } while (end->next != *L);

        do
        {

            if (p->info == val)
            {
                *L = (*L)->next;
                end->next = *L;
                free(p);
                p = *L;
                q = p->next;
            }
            else
            {

                if (q->info == val)
                {
                    p->next = q->next;
                    free(q);
                    q = p->next;
                }
                else
                {
                    p = q;
                    q = q->next;
                }
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

        Node *p = *L;
        Node *q;

        do
        {

            q = p->next;
            do
            {

                if (p->info > q->info)
                {
                    int temp = p->info;
                    p->info = q->info;
                    q->info = temp;
                }
                q = q->next;
            } while (q != *L);
            p = p->next;
        } while (p != *L);
    }
}

void insert(Node **L, int val)
{

    if (*L == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {

        Node *p = *L;
        Node *end = *L;

        do
        {

            end = end->next;
        } while (end != *L);

        Node *q = malloc(sizeof(Node));
        q->info = val;

        if (val <= (*L)->info)
        {
            q->next = *L;
            end->next = q;
            *L = q;
        }
        else if (val <= end->info)
        {
            end->next = q;
            q->next = *L;
        }
        else
        {

            bool find = false;
            p = *L;
            do
            {
                if (p->info <= val && p->next->info >= val)
                {
                    q->next = p->next;
                    p->next = q;
                    find = true;
                }
                else
                {
                    p = p->next;
                }
            } while (p != *L);
        }
    }
}

void release(Node **L)
{

    if (*L != NULL)
    {
        Node *p = *L;

        while (*L != NULL)
        {
            p = *L;
            *L = (*L)->next;
            free(p);
        }
    }
}
int main()
{

    Node *L;

    creation(&L);
    aff(&L);
    deleteLessThan(&L);
    aff(&L);

    return 0;
}
