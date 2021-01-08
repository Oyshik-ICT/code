#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i;
    long long int sum,k,d,result,r;
    scanf("%d",&t);
    while(t--){
            sum=0;
        scanf("%d%lld%lld",&n,&k,&d);
        long long int a[n];
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum=sum+a[i];
        }
    result=k*d;
    r=sum/k;
    if(result<=sum){
        printf("%lld\n",d);
    }
    else if(result>sum){
        printf("%lld\n",r);
    }
    }

    return 0;
}
