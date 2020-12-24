#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,d,sum=0,k,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++){
        k=i;
        for(int j=0;j<m;j++){
            sum=sum+a[k];
            k++;
        }
        k--;
        if(sum==d){
            c++;
        }
        if(k==n-1){
            break;
        }
        sum=0;
    }
    cout<<c<<endl;
    return 0;
}
