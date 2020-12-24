#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,i,c;
    cin>>t;
    while(t--){
            c=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]<=0){
                c++;
            }
        }
    if(c>=k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}
