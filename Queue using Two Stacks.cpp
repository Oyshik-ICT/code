#include<bits/stdc++.h>

using namespace std;

#define Q_SIZE 100000

typedef struct
{
    int data[Q_SIZE+1];
    int head,tail;
}Queue;

void enqueue(Queue *q,int item)
{
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Q_SIZE+1);
}

void dequeue(Queue *q)
{
    q->head=(q->head+1)%(Q_SIZE+1);

}

void q_print(Queue *q)
{
    cout<<q->data[q->head]<<"\n";
}

int main()
{
    Queue my_q;
    my_q.head=0;
    my_q.tail=0;
    int q,type,num;
    cin>>q;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>num;
            enqueue(&my_q,num);
        }
        else if(type==2){
            dequeue(&my_q);
        }
        else if(type==3){
            q_print(&my_q);
        }
    }
    return 0;
}
