#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n,u,k,k1,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int a[n];
        u=0;
        k1=0;
        x=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==-1){
                u++;
            }
            if(a[i]>k){
                k1++;
            }
            if(a[i]==1 || a[i]==0){
                x++;
            }
        }
        if((n-u)<n/2.0){
            printf("Rejected\n");
        }
        else if(k1>=1){
            printf("Too Slow\n");
        }
        else if(x==n){
            printf("Bot\n");
        }
        else{
            printf("Accepted\n");
        }
    }

    return 0;
}
