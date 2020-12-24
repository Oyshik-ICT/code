#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int A[],int n)
{
    int i,j,k,item;
    for(i=1;i<n;i++){
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=item;
            for(k=0;k<n;k++){
            printf("%d ",A[k]);
        }
        printf("\n");
    }
}

int main()

{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    insertion_sort(A,n);
    return 0;
}
