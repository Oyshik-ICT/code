#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,l,r,f1,f2;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&l,&r);
        f1=r-l+1;
        f2=f1+1*(f1-1);
        printf("%d\n",f2);
    }

    return 0;
}
