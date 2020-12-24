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
int main()
{
    Node *n1,*n2,*n3,*head;
    n1=create_node(10,NULL);
    head=n1;
    head=prepend(20,head);
    n2=head;
    cout<<n2->next->data<<"\n";
}
