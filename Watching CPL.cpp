#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,sum,k,n,i,c,t1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        int a[n];
        sum=0;
        c=0;
        t1=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=n-1;i>=0;i--){
            sum=sum+a[i];
            if(t1==2){
                break;
            }
            if(sum>=k){
                sum=0;
                t1++;
            }
            c++;
        }
        if(t1==2){
            printf("%d\n",c);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}
