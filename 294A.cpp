#include<bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n,i,m,x,y,l,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d%d",&x,&y);
        l=y-1;
        r=a[x]-y;
        if(x-1>=1){
            a[x-1]=a[x-1]+l;
        }
        if(x+1<=n){
            a[x+1]=a[x+1]+r;
        }
        a[x]=a[x]-(l+r)-1;
    }
    for(i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
