#include<bits/stdc++.h>

using namespace std;

int a[24][60];

int main()
{
    int n,i,j,r=-1,h,m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>h>>m;
        a[h][m]++;
    }
    for(i=0;i<24;i++){
        for(j=0;j<60;j++){
            if(a[i][j]>r){
                r=a[i][j];
            }
        }
    }
    cout<<r<<"\n";

    return 0;
}
