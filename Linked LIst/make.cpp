/*#include<bits/stdc++.h>
using namespace std ;

class Node
{
    public :
    int val ;
    Node *next ;

    Node (int a)
    {
        val = a ;
        next = NULL;
    }
};

void insert(Node* &head , int val )
{
    Node *n = new Node(val);
    if(head == NULL)
    {
        head = n ;
        return ;
    }
    Node* temp = head;

    while(temp->next)
    temp = temp->next ;

    temp->next = n ;
}
void insertAtHead(Node* &head , int val)
{
    Node* n = new Node(val);
    n->next = head ;
    head = n ;
}
void display(Node* head)
{
    Node* temp = head;

    while(temp)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head = NULL;
    insert(head , 1);
    insert(head , 2);
    insert(head , 3);
    display(head);
    insertAtHead(head , 4);
    display(head);
    return 0 ;
}*/

#include<bits/stdc++.h>
using namespace std ;

class Node
{
    public:
    int val;
    Node *next ;

    Node(int a)
    {
       val =a ;
       next = NULL ;

    }
};
void insertAtEnd(Node*  &head , int val)
{
    Node* n = new Node(val);
    if(head == NULL)
    {
        head = n ;
        return ;
    }
    Node* temp = head;

    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = n ;

}
void display(Node* head)
{
    if(head == NULL)
    cout<<"empty";

    Node* temp = head;
    while(temp)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

}
int main()
{
    Node* head = NULL;
    insertAtEnd(head , 1);
    insertAtEnd(head , 2);
    insertAtEnd(head , 3);
    display(head);
}