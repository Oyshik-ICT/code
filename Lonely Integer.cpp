#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum^a[i];
    }
    cout<<sum<<"\n";

    return 0;
}
