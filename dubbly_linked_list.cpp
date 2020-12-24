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

    new_node->prev=prev;
    new_node->data=item;
    new_node->next=next;

    return new_node;
}

Node *prepend(int item,Node *head)
{
    Node *new_node=create_node(NULL,item,head);

    new_node->next->prev=new_node;

    return new_node;
}

void print_linkedlist(Node *head)
{
    Node *current_node=head;
    while(current_node!=NULL){
        cout<<current_node->data<<"\n";
        current_node=current_node->next;
    }
}
int main()
{
    Node *head,*n1;
    head=create_node(NULL,10,NULL);
    head=prepend(20,head);

    print_linkedlist(head);
}
