#include<bits/stdc++.h>

using namespace std;

#define Stack_Max 10

typedef struct
{
    int top;
    int data[Stack_Max];
}Stack;

void push(Stack *s,int item)
{
    if(s->top<Stack_Max){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else{
        cout<<"Stuck is full"<<"\n";
    }
}

int  pop(Stack *s)
{
    int item;
    if(s->top==0){
        cout<<"Stack is empty"<<"\n";
        return -1;
    }
    else{
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}

int main()
{
    Stack my_stack;
    int item;
    my_stack.top=0;
    push(&my_stack,1);
    push(&my_stack,2);
     push(&my_stack,3);

     item=pop(&my_stack);
     cout<<item<<"\n";
    item= pop(&my_stack);
    cout<<item<<"\n";
     item=pop(&my_stack);
     cout<<item<<"\n";
       item=pop(&my_stack);
     cout<<item<<"\n";
}
