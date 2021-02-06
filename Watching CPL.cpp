#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,sum,k,n,i,c,ave;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        k=k*2+1;
        if(k>sum){
            printf("-1\n");
            continue;
        }
        ave=sum/n;
        c=k/ave;
        if(c<=0){
            printf("-1\n");
        }

        else{
            printf("%d\n",c);
        }

    }

    return 0;
}
