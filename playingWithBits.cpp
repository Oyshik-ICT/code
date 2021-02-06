#include<bits/stdc++.h>

using namespace std;

int bit(int n)
{
    int c=0;
    while(n>0){
        c=c+(n&1);
        n=n>>1;
    }
    return c;
}

int main()
{
    int t,a,b,i,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=0;
        for(i=a;i<=b;i++){
            if((i&1==0) && i<b){
                c=c+2*bit(i)+1;
                i++;
                continue;
            }
            c=c+bit(i);
        }
        cout<<c<<"\n";
    }

    return 0;
}
