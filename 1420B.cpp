#include<bits/stdc++.h>

using namespace std;

long long int msb(long long int x)
{
    long long int c=0;
    if(x==0){
        return 0;
    }
    while(x>0){
        x=x>>(long long)1;
        c++;
    }
    return c-1;
}

int main()
{
    int t,n,i,x;
    long long int c1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long int  a[n];
        long long int c[31]={0};
        c1=0;
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            x=msb(a[i]);
            c[x]++;
        }
        for(i=0;i<31;i++){
            c1=c1+(c[i]*(c[i]-1))/2;
        }
        printf("%lld\n",c1);
    }
    return 0;
}
