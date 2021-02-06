#include<bits/stdc++.h>

using namespace std;

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i+1;
}

int parent(int i)
{
    return i/2;
}

int main()
{
    int h[]={0,19,7,17,3,5,12,10,1,4};
    int i,p;
    for(i=9;i>1;i--){
        p=parent(i);
        if(h[p]<h[i]){
            printf("It is not a heap\n");

            return 0;
        }
    }

    printf("It is a heap\n");

    return 0;
}
