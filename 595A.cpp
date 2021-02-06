#include<bits/stdc++.h>

using namespace std;

int a[101][201];

int main()
{
    int n,m,i,j,c=0,sum=0;
    scanf("%d%d",&n,&m);
    m=2*m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
            c=0;
        for(j=1;j<=m;j++){
            if(a[i][j]==1){
                c++;
            }
            if(j%2==0){
                if(c>=1){
                    sum=sum+1;
                }
                c=0;
            }
        }
    }
    printf("%d\n",sum);

    return 0;
}
