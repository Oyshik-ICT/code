#include<bits/stdc++.h>

using namespace std;

int b1[100002];
int b2[100002];

int main()
{
    int n,i,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>k;
        if(b2[k]==0){
            b2[k]=i;
        }
        else if(b2[k]!=-1){
            if(b1[k]!=0){
                if(b1[k]!=(i-b2[k])){
                        b2[k]=-1;
                    continue;
                }
            }
            b1[k]=i-b2[k];
            b2[k]=i;
        }
    }
    int c=0;
    for(i=1;i<100002;i++){
        if(b2[i]>0){
            c++;
        }
    }
    cout<<c<<"\n";
    for(i=1;i<100002;i++){
        if(b2[i]>0){
            cout<<i<<" "<<b1[i]<<"\n";
        }
    }

    return 0;
}
