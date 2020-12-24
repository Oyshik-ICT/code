#include <bits/stdc++.h>

using namespace std;

int  b[100];

int main()
{
    int n,i,temp,j,sum,maxi=0,big=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>big){
            big=a[i];
        }
    }
    for(i=0;i<n;i++){
        temp=a[i];
        b[temp]++;
    }
    for(j=0;j<big;j++){
        sum=b[j]+b[j+1];
        if(sum>maxi){
            maxi=sum;
        }
    }
    cout<<maxi<<endl;

    return 0;
}
