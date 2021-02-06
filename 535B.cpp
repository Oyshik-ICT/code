#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long int n,ans=0,i,c=0;
    char ch[15];
    scanf("%s",ch);
    n=strlen(ch);
    ans=(1<<n)-2;
    for(i=n-1;i>=0;i--,c++){
        if(ch[i]=='7'){
            ans=ans+(1<<c);
        }
    }
    printf("%lld\n",ans+1);

    return 0;
}
