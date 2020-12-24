#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,temp,temp1,j,p;
    cin>>n>>k;
    int a[n+1];
    a[0]=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(i==1){
            temp=a[i];
        }
        else if(temp!=a[i]){
            temp=0;
        }
    }
    if(temp!=0){
        cout<<"0"<<"\n";
    }
    else{
        if(k==n){
            cout<<n-1<<"\n";
        }
        else{
            for(i=k;i<=n;i++){
                if(i==k){
                    temp1=a[i];
                }
                else if(temp1!=a[i]){
                    temp1=0;
                    break;
                }
            }
            if(temp1==0){
                cout<<"-1"<<"\n";
            }
            else{
                for(j=n;j>=1;j--){
                    if(a[j]!=a[k]){
                        p=j;
                        break;
                    }
                }
                cout<<p<<"\n";
            }
        }
    }
    return 0;

}
