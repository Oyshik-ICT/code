#include<bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node *create_node(int item,Node *next)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    if(new_node==NULL){
        cout<<"ERROR!"<<"\n";
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;

    return new_node;
}

Node *prepend(int item,Node *head)
{
    Node *new_node=create_node(item,head);

    return new_node;
}

Node *append(int item,Node *head)
{
    Node *new_node=create_node(item,NULL);
    if(head==NULL){
        return new_node;
    }
    Node *current_node=head;
    while(current_node->next!=NULL){
        current_node=current_node->next;
    }
    current_node->next=new_node;

    return head;
}

void insert_node(Node *node,int item)
{
    Node *new_node=create_node(item,node->next);

    node->next=new_node;
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
    Node *n1,*n2,*head;
    n1=create_node(10,NULL);
    head=n1;
    print_linkedlist(head);
    head=prepend(20,head);
    print_linkedlist(head);
    head=append(30,head);
    print_linkedlist(head);
    insert_node(n1,50);
     print_linkedlist(head);

    return 0;
}
