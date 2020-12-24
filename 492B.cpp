#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,i,m=0;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        if(a[i+1]-a[i]>m){
            m=a[i+1]-a[i];
        }
    }

    double x=a[0];
    double y=(double)m/2;
    double z=l-a[n-1];
    double ans=max(max(x,y),z);

    cout<<fixed<<setprecision(10)<<ans<<"\n";

    return 0;
}
