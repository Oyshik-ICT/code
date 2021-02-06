#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,c1,index,k=0,m=10000;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n],e[n];

    for(i=0;i<n;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0;i<n;i++){
            c1=0;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i]<a[j] && b[i]<b[j] && c[i]<c[j]){
                break;
            }
            else{
                c1++;
            }
        }
        if(c1==n-1){
            e[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++){
        if(d[e[i]]<m){
            m=d[e[i]];
            index=e[i];
        }
    }
    printf("%d\n",index+1);

    return 0;
}
