#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,td,tdc,ts,result;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    td=(k*l)/nl;
    tdc=d*c;
    ts=p/np;
    result=(min(td,min(tdc,ts)))/n;
    cout<<result<<"\n";

    return 0;
}
