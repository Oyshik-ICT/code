#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
    int n,q,i,j,k,t;
    int a[100000][300000];
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++){
            scanf("%d",&k);
             a[n][k];
        for(j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(t=0;t<q;t++){
        scanf("%d%d",&i,&j);
        printf("%d\n",a[i][j]);
    }
    return 0;
}
