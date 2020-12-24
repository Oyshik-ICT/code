#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,i,j,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        x=n/2;
        if(x%2!=0){
            printf("NO\n");
        }
        else{
                printf("YES\n");
            for(i=2;i<=n;i=i+2){
                printf("%d ",i);
            }
            for(j=0;j<x-1;j++){
                printf("%d ",j*2+1);
            }
            printf("%d\n",j*2+1+n/2);
        }
    }
    return 0;
}
