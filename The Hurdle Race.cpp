#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(0>=(a[n-1]-k)){
        cout<<"0"<<endl;
    }
    else{
        cout<<a[n-1]-k<<endl;
    }
    return 0;
}

