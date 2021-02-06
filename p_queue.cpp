#include<bits/stdc++.h>

using namespace std;

int left(int i)
{
    return i*2;
}

int right(int i)
{
    return i*2+1;
}

void max_heapify(int h[],int n,int i)

{
    int l,r,large,t;

    l=left(i);
    r=right(i);

    if(l<=n && h[l]>h[i]){
        large=l;
    }
    else{
        large=i;
    }
    if(r<=n && h[r]>h[large]){
        large=r;
    }

    if(large!=i){
        t=h[i];
        h[i]=h[large];
        h[large]=t;

        max_heapify(h,n,large);
    }
}

int extract_max(int h[],int n)
{
    int m=h[n];
    h[1]=m;
    n--;

    max_heapify(h,n,1);

    return h[1];
}

int main()
{
    int h[]={0,19,10,17,5,7,12,1,2,3};

    int x=extract_max(h,9);

    printf("%d\n",x);

    return 0;
}
