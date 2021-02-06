#include<bits/stdc++.h>

using namespace std;

int b[101];

int a[101];

int main()
{
    int n,m,i,x,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++){
        x=a[i];
        for(j=a[i];j<=n;j++){
            if(b[j]==0){
                b[j]=x;
            }
        }
    }
    for(i=1;i<=n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
