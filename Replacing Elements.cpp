#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,c,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&n,&k);
    int a[n];
    c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=k){
            c++;
        }
    }
    if(c==n){
        printf("YES\n");
        continue;
    }
    sort(a,a+n);
    if(a[0]+a[1]<=k){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }

    return 0;
}
