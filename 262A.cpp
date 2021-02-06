#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,sum,c=0,mod;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=0;
        while(a[i]>0){
            mod=a[i]%10;
            a[i]=a[i]/10;
            if(mod==4 || mod==7){
                sum++;
            }
        }
        if(sum<=k){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
