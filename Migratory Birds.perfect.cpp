#include<bits/stdc++.h>

using namespace std;

int a[200000];

int main()
{
    int n,k,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>k;
        a[k]++;
    }
    int m=0;
    for(i=1;i<=5;i++){
        m=max(m,a[i]);
    }
    for(i=1;i<=5;i++){
        if(a[i]==m){
            cout<<i<<endl;

            return 0;
        }
    }
}
