#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int t,n,m,s,r;
    cin>>t;
    while(t--){
        cin>>n>>m>>s;
        r=m%n;
        r=r+s-1;
        if(r%n==0){
            cout<<n<<"\n";
        }
        else{
            cout<<r%n<<"\n";
        }
    }

    return 0;
}
