#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,m,m1;
    cin>>n>>a>>b;
    m=n-a-1;
    if(m>b){
            m1=m-b;
        cout<<n-a-m1<<"\n";
    }
    else{
        cout<<m+1<<"\n";
    }

    return 0;
}
