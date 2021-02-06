#include<bits/stdc++.h>

using namespace std;

int h_size=9;

int left(int i)
{
    return i*2;
}

int right(int i)
{
    return i*2+1;
}

int parent(int i)
{
    return i/2;
}

void insert_node(int h[],int node )
{
    int i,p,t;
    h_size=h_size+1;
    h[h_size]=node;
    i=h_size;

    while(i>1 && h[i]>h[parent(i)]){
        p=parent(i);
        t=h[i];
        h[i]=h[p];
        h[p]=t;

        i=p;
    }
}

void print_heap(int h[],int n)
{
    int i;
    for(i=1;i<=n;i++){
        printf("%d ",h[i]);
    }

    printf("\n");
}

int main()
{
    int h[]={0,19,10,17,5,7,12,1,2,3};

    print_heap(h,h_size);

    insert_node(h,18);

    print_heap(h,h_size);

    return 0;
}
