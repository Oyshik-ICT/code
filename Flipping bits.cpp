#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    long long int n,s;
    scanf("%d",&q);
    while(q--){
        scanf("%lld",&n);
        s=4294967295-n;
        printf("%lld\n",s);
    }

    return 0;
}
