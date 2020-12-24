#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,k,i,n,rev,c=0,mod;
    cin>>n1>>n2>>k;
    for(i=n1;i<=n2;i++){
        n=i;
        rev=0;
        while(n>0){
            mod=n%10;
            rev=rev*10+mod;
            n=n/10;
        }
       if(abs(i-rev)%k==0) {
        c++;
       }
    }
    cout<<c<<endl;

    return 0;
}
