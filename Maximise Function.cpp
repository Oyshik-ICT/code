#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n;
    long long int sum,n1,n2,n3;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        n1=abs(a[0]-a[1]);
        n2=abs(a[1]-a[n-1]);
        n3=abs(a[0]-a[n-1]);
        sum=n1+n2+n3;

        printf("%lld\n",sum);
    }
    return 0;
}
