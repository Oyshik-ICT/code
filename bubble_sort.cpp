#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[]={8,2,4,1,5};
    int n=5,i;
    bubble_sort(A,n);
    for(i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");

    return 0;
}
