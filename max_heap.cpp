#include<bits/stdc++.h>

using namespace std;

int  left(int i)
{
    return i*2;
}
int right(int i)
{
    return i*2+1;
}

void max_heapify(int heap[],int h_size,int i)
{
    int l,r,large,t;
    l=left(i);
    r=right(i);

    if(l<=h_size && heap[l]>heap[i]){
        large=l;
    }
    else{
        large=i;
    }

    if(r<=h_size && heap[r]>heap[large]){
        large=r;
    }

    if(large!=i){
        t=heap[large];
        heap[large]=heap[i];
        heap[i]=t;

        max_heapify(heap,h_size,large);
    }
}

void heap_sort(int heap[],int n)
{
    int i,t;
    for(i=n;i>1;i--){
        t=heap[i];
        heap[i]=heap[1];
        heap[1]=t;
        n--;
        max_heapify(heap,n,1);
    }
}

void print_heap(int heap[],int s)
{
    int i;
    for(i=1;i<=s;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n\n";
}

int main()
{
    int h_size=9;
    int heap[]={0,19,7,12,3,5,17,10,1,2};

    print_heap(heap,h_size);

    max_heapify(heap,h_size,3);

      print_heap(heap,h_size);

      heap_sort(heap,h_size);
       print_heap(heap,h_size);

      return 0;
}
