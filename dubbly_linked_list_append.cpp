#include<bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
    Node *prev;
};

Node *create_node(Node *prev,int item,Node *next)
{
    Node *new_node=(Node *)malloc(sizeof(Node));

    new_node->data=item;
    new_node->prev=prev;
    new_node->next=next;

    return new_node;
}

Node *prepend(int item,Node *head)
{
    Node *new_node=create_node(NULL,item,head);

    new_node->next->prev=new_node;

    return new_node;
}

Node *append(int item,Node *head)
{
    Node *new_node=create_node(NULL,item,NULL);

    Node *current_node=head;
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
    current_node->next=new_node;

    new_node->prev=current_node;

    return head;
}

Node *remove_node(Node *node,Node *head)
{
    if(node==head){
        head=node->next;
        head->prev=NULL;
        free(node);
        return head;
    }
    Node *previous_node=node->prev;
    Node *next_node=node->next;

    previous_node->next=next_node;
    next_node->prev=previous_node;

    return head;
}

void print_linkedlist(Node *head)
{
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<"\n";
        current_node=current_node->next;
    }
    cout<<"\n";
}

int main()
{
    Node *head,*n1;
    head=create_node(NULL,10,NULL);
    n1=head;
    head=prepend(20,head);
    head=prepend(50,head);
    head=append(30,head);
    print_linkedlist(head);
    head=remove_node(n1,head);
     print_linkedlist(head);

    return 0;
}
