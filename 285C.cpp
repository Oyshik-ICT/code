#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    scanf("%d",&n);
    long long int a[n],c=0,m;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        j=i+1;
        m=abs(j-a[i]);
        c=c+m;
    }
    printf("%lld\n",c);

    return 0;
}
