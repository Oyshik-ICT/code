#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                c++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}
