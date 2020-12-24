#include<bits/stdc++.h>

using namespace std;

void selection_sort(int A[],int n)
{
    int i,j,temp,index_min;
    for(i=0;i<n-1;i++){
        index_min=i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[index_min]){
                index_min=j;
            }
        }
        if(i!=index_min){
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }
}

int main()
{
    int A[]={10,5,2,8,7};
    int n=5,i;
    selection_sort(A,n);
    for(i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");
    return 0;
}
