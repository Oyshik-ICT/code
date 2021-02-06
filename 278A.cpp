#include<bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n,i,sum1=0,sum2=0,s,t,s1,mod;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&s,&t);
    if(s==t){
        printf("0\n");
        return 0;
    }
    s1=s;
    while(1){
        mod=s%n;
                if(mod==0){
            mod=n;
        }
        if(mod==t){
            break;
        }
        sum1=sum1+a[mod];
        s++;
    }
    while(1){
        mod=t%n;
        if(mod==0){
            mod=n;
        }
        if(mod==s1){
            break;
        }
        sum2=sum2+a[mod];
        t++;
    }
    printf("%d\n",min(sum1,sum2));

    return 0;
}
