#include<stdio.h>
#include<conio.h>

int main()
{
struct Node
{
    int val ;
    struct Node *next ;

};

void insert(struct Node* head , int val )
{
   struct Node *n = (struct Node*)malloc(sizeof(Node));
    n->val = val;
    n->next = NULL;
    if(head == NULL)
    {
        head = n ;
        return ;
    }
    struct Node* temp = head;

    while(temp->next)
    temp = temp->next ;

    temp->next = n ;
}
void insertAtHead(struct Node* head , int val)
{
    struct Node* n = (struct Node*)malloc(sizeof(Node));
    n->val = val ;
    n->next = head ;
    head = n ;
}
void display(struct Node* head)
{
    struct Node* temp = head;

    while(temp)
    {
        printf("%d" , temp->val);
        temp = temp->next;
    }

}

    struct Node* head = NULL;
    insert(head , 1);
    insert(head , 2);
    insert(head , 3);
    display(head);
    insertAtHead(head , 4);
    display(head);
    return 0 ;
}