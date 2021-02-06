#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,m=0,XOR,i,j;
    cin>>l>>r;
    for(i=l;i<=r;i++){
        for(j=i+1;j<=r;j++){
            XOR=i^j;
            if(XOR>m){
                m=XOR;
            }
        }
    }
    cout<<m<<"\n";

    return 0;
}
