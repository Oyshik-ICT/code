#include<bits/stdc++.h>

using namespace std;

void merge_ar(int A[],int left,int mid,int right)
{
    int s_left,s_right,index_a,index_l=0,index_r=0,i;

    s_left=mid-left+1;
    s_right=right-mid;

    int L[s_left],R[s_right];

    for(i=0;i<s_left;i++){
        L[i]=A[i+left];
    }

    for(i=0;i<s_right;i++){
        R[i]=A[mid+1+i];
    }
    for(index_a=left;index_l<s_left && index_r<s_right;index_a++){
        if(L[index_l]<R[index_r]){
            A[index_a]=L[index_l];
            index_l++;
        }
        else{
            A[index_a]=R[index_r];
            index_r++;
        }
    }
    while(index_l<s_left){
        A[index_a]=L[index_l];
        index_a++;
        index_l++;
    }
     while(index_r<s_right){
        A[index_a]=R[index_r];
        index_a++;
        index_r++;
    }
}

void merge_sort(int A[],int left,int right)
{
    if(left>=right){
        return;
    }

    int mid=left+(right-left)/2;

    merge_sort(A,left,mid);
     merge_sort(A,mid+1,right);

     merge_ar(A,left,mid,right);
}

int main()
{
    int i,n=8;
    int A[]={1,5,6,3,5,8,7,2,9};

    merge_sort(A,0,n);

    for(i=0;i<=n;i++){
        printf("%d  ",A[i]);
    }

    printf("\n");

    return 0;
}
