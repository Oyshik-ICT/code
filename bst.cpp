#include<bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

Node *create_node(int item)
{
    Node *new_node=(Node *)malloc(sizeof(Node));

    if(new_node==NULL){
        cout<<"Error!Can not create node"<<"\n";
        exit(1);
    }

    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->parent=NULL;

    return new_node;
}

void add_left_child(Node *node,Node *child)
{
    node->left=child;

    if(child!=NULL){
        child->parent=node;
    }
}

void add_right_child(Node *node,Node *child)
{
    node->right=child;

    if(child!=NULL){
        child->parent=node;
    }
}

Node *insert_bst(Node *root,Node *node)
{
    if(root==NULL){
        root=node;

        return root;
    }

    Node *parent_node,*current_node;

    parent_node=NULL;

    current_node=root;

    while(current_node!=NULL){
        parent_node=current_node;
        if(node->data<current_node->data){
            current_node=current_node->left;
        }
        else{
            current_node=current_node->right;
        }
    }
    if(node->data<parent_node->data){
        add_left_child(parent_node,node);
    }
    else{
        add_right_child(parent_node,node);
    }

    return root;
}

Node *create_bst()
{
    int i;
    Node *root,*node;

    int a[]={5,17,3,7,12,19,1,4};

    root=create_node(10);

    for(i=0;i<8;i++){
        node=create_node(a[i]);
        root=insert_bst(root,node);
    }
    return root;
}

void pre_order(Node *node)
{
    cout<<node->data<<" ";

    if(node->left!=NULL){
        pre_order(node->left);
    }

    if(node->right!=NULL){
        pre_order(node->right);
    }

}

int main()
{
    Node *root=create_bst();

    pre_order(root);

    return 0;
}
