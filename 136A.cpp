#include<bits/stdc++.h>

using namespace std;

int a[100];

int main()
{
    int i,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[num]=i;
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
