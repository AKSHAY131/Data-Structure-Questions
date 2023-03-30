#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node* next;
};

void insertAtLast(struct node **s , int data)
{
    struct node * n , *temp;
    n = (struct node*)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;

    if(*s == NULL)
    *s = n ;
    else
    {
        temp = *s;
        while(temp->next)
        temp =temp->next;

        temp->next = n ;
    }
    
}
void deleteFirst(struct node**s)
{
    if(*s!=NULL)
    {
        struct node *t;
        t = *s;
        *s = t->next;
        free(t);
    }
    else
    printf("no element is present");
}

void printList(struct node *start)
{
    while(start)
    {
        printf( "%d->", start->item );
        start= start->next;
    }
    printf("NULL");
    
}

int main()
{
    struct node* start =NULL;
    insertAtLast(&start , 5);
    insertAtLast(&start , 99);
    printList(start);
    return 0;
}