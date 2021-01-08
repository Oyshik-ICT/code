#include<bits/stdc++.h>

using namespace std;

int a[100005];
int r[100005];
int c[100005];

int main()
{
    int n,m,i,l;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--){
        r[i]=r[i+1];
        if(c[a[i]]==0){
            r[i]++;
        }
        c[a[i]]++;
    }
    while(m--){
        scanf("%d",&l);
        printf("%d\n",r[l]);
    }

    return 0;
}
