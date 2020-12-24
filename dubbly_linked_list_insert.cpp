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

void insert_node(Node *node,int item)
{
    Node *new_node=create_node(NULL,item,NULL);

    new_node->next=node->next;
    node->next->prev=new_node;
    new_node->prev=node;
    node->next=new_node;

}

void insertion_sort(Node *head)
{
    Node *previous1,*previous;
    Node *current_node=head->next;
    while(current_node!=NULL){
        previous1=current_node;
        previous=current_node->prev;
        int item=current_node->data;
        while(previous!=NULL && previous->data>item){
                previous->next->data=previous->data;
                previous1=previous;
                previous=previous->prev;
        }
        if(previous==NULL){
            previous1->data=item;
        }
        else{
            previous->next->data=item;
        }
        current_node=current_node->next;
    }
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

     insert_node(n1,60);
      print_linkedlist(head);

      insertion_sort(head);

      print_linkedlist(head);


    return 0;
}
