#include<bits/stdc++.h>

using namespace std;

int h_size=0;

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

void max_heapify(int h[],int i)

{
    int l,r,m,t;

    l=left(i);
    r=right(i);

    if(l<=h_size && h[l]<h[i]){
        m=l;
    }
    else{
        m=i;
    }
    if(r<=h_size && h[r]<h[m]){
        m=r;
    }

    if(m!=i){
        t=h[i];
        h[i]=h[m];
        h[m]=t;

        max_heapify(h,m);
    }
}

void heap_add(int h[],int node)
{
    int i,p,t;
    h_size=h_size+1;
    h[h_size]=node;
    i=h_size;
    while(i>1 && h[i]<h[parent(i)]){
        p=parent(i);
        t=h[p];
        h[p]=h[i];
        h[i]=t;
        i=p;
    }
}

void delete_node(int h[],int node)
{
    int i;
    for(i=1;i<=h_size;i++){
        if(h[i]==node){
            break;
        }
    }
    h[i]=h[h_size];
    h_size=h_size-1;
    max_heapify(h,i);
}

void min_node(int h[])
{
    printf("%d\n",h[1]);
}

int main()
{
    int h[100010],q,type,v;
    h[0]=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&type);
        if(type==1){
            scanf("%d",&v);
            heap_add(h,v);
        }
        else if(type==2){
            scanf("%d",&v);
            delete_node(h,v);
        }
        else{
            min_node(h);
        }
    }

    return 0;
}

