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

Node *bst_search(Node *root,int item)
{
    Node *node=root;

    while(node!=NULL){
        if(node->data==item){
            return node;
        }
        if(node->data<item){
            node=node->right;
        }
        else{
            node=node->left;
        }
    }
    return node;
}

Node *bst_transplant(Node *root,Node *current_node,Node *new_node)
{
    if(current_node==root){
        root=new_node;
        return root;
    }
    else if(current_node==current_node->parent->left){
        add_left_child(current_node->parent,new_node);
    }
    else{
        add_right_child(current_node->parent,new_node);
    }

    return root;
}

Node *bst_mini(Node *node)
{
    while(node->left!=NULL){
        node=node->left;
    }

    return node;
}

Node *bst_delete(Node *root,Node *node )
{
    Node *smallest;
    if(node->left==NULL){
        root=bst_transplant(root,node,node->right);
    }
    else if(node->right==NULL){
        root=bst_transplant(root,node,node->right);
    }
    else{
        smallest=bst_mini(node->right);
        if(smallest->parent!=node){
            root=bst_transplant(root,smallest,smallest->right);
            add_right_child(smallest,node->right);
        }
        add_left_child(smallest,node->left);
    }

    free(node);

    return root;
}

void inorder(Node *node)
{
    if(node->left!=NULL){
        inorder(node->left);
    }
    cout<<node->data<<" ";
       if(node->right!=NULL){
        inorder(node->right);
    }
}


int main()
{
    Node *root=create_bst();
    inorder(root);
    Node *node;
    node=bst_search(root,7);

    root=bst_delete(root,node);
    printf("\n\n");
     inorder(root);
}
