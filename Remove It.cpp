#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x;
    cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==x){
            continue;
        }
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
