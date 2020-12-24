#include<bits/stdc++.h>

using namespace std;

#define Q_SIZE 5

typedef struct
{
    int data[Q_SIZE+1];
    int head,tail;
}Queue;

void enqueue(Queue *q,int item)
{
    if((q->tail+1)%(Q_SIZE+1)==q->head){
        cout<<"Queue is full"<<"\n";
        return;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Q_SIZE+1);
}

int dqueue(Queue *q)
{
    int item;
    if(q->head==q->tail){
        printf("Queue is empty\n");
        return -1;
    }
    item=q->data[q->head];
    q->head=(q->head+1)%(Q_SIZE+1);

    return item;
}

int main()
{
    Queue my_q;
    my_q.head=0;
    my_q.tail=0;

    int item;

    enqueue(&my_q,1);
    cout<<"tail="<<my_q.tail<<"\n";
    enqueue(&my_q,2);
    cout<<"tail="<<my_q.tail<<"\n";
     enqueue(&my_q,3);
    cout<<"tail="<<my_q.tail<<"\n";
    enqueue(&my_q,4);
    cout<<"tail="<<my_q.tail<<"\n";
     enqueue(&my_q,5);
    cout<<"tail="<<my_q.tail<<"\n";
    enqueue(&my_q,6);
    cout<<"tail="<<my_q.tail<<"\n";

    item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
     item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
    item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
      item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
      item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
      item=dqueue(&my_q);
    cout<<"item ="<<item<<" "<<"head ="<<my_q.head<<"\n";
}
