#include<bits/stdc++.h>

using namespace std;

int a[101][2];
int b[101];

int main()
{
    int n,m,i,j,k,x,y,c,c1=0;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=2;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(i=1;i<=k;i++){
        cin>>x>>y;
        if(b[x]==0){
            b[x]=1;
        }
        else{
            b[y]=1;
        }
    }
    for(i=1;i<=m;i++){
            c=0;
        for(j=1;j<=2;j++){
            if(b[a[i][j]]==1){
                c++;
            }
        }
    if(c==2){
        c1++;
    }
    }
    cout<<c1<<"\n";

    return 0;
}
