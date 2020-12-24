#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int m;

typedef struct
{
    int top;
    int data[MAX];
}Stack;

void push(Stack *s,int num)
{
    s->data[s->top]=num;
    if(m<num){
        m=num;
    }
    s->top=s->top+1;
}
void pop(Stack *s)
{
    if(s->top==0){
        return;
    }
    int i;
    s->top=s->top-1;
    m=0;
    for(i=s->top-1;i>=0;i--){
        if(m<s->data[i]){
            m=s->data[i];
        }
    }

}
int main()
{
    Stack my_stack;
    int n,type,num;
    my_stack.top=0;
    cin>>n;
    while(n--){
        cin>>type;
        if(type==1){
            cin>>num;
            push(&my_stack,num);
        }
        else if(type==2){
            pop(&my_stack);
        }
        else if(type==3){
            cout<<m<<"\n";
        }
    }
    return 0;
}
