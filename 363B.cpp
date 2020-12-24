#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum=0,msum,i,index=1;
    cin>>n>>k;
    int h[n];
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    for(i=0;i<k;i++){
        sum=sum+h[i];
    }
    msum=sum;
    for(i=k;i<n;i++){
        msum=msum+h[i]-h[i-k];
        if(msum<sum){
            sum=msum;
            index=i-k+2;
        }
    }

    cout<<index<<"\n";

    return 0;
}
