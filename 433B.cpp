#include<bits/stdc++.h>

using namespace std;

int a[100002];
long long int b[100002];
long long int c[100002];

int main()
{
    int n,i,m,t,l,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=b[i-1]+a[i];
    }
    sort(a,a+n+1);
    for(i=1;i<=n;i++){
        c[i]=c[i-1]+a[i];
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d%d%d",&t,&l,&r);
        if(t==1){
            printf("%lld\n",b[r]-b[l-1]);
        }
        else{
             printf("%lld\n",c[r]-c[l-1]);
        }
    }

    return 0;
}
