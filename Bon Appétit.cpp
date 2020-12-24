#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,sum=0,b;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>b;
    for(i=0;i<n;i++){
        if(i==k){
            continue;
        }
        sum=sum+a[i];
    }
    sum=sum/2;
    if(sum==b){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-sum<<endl;
    }

    return 0;
}
