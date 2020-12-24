#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,k;
    scanf("%d",&t);
    while(t--){
            k=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(n==1){
            printf("YES\n");
            continue;
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1){
                printf("NO\n");
                k=1;
                break;
            }
        }
        if(k==0){
            printf("YES\n");
        }
    }
    return 0;
}
