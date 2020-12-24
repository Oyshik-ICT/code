#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int A[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++){
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=item;
    }
}

int main()
{
    int A[]={5,2,3,1,4};
    int n=5,i;
    insertion_sort(A,n);
    for(i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");

    return 0;
}
