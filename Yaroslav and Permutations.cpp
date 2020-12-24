#include<bits/stdc++.h>

using namespace std;

int a[1005];

int main()
{
    int n,x,m=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        a[x]++;
        if(a[x]>m){
            m=a[x];
        }
    }
    if(m<=(n+1)/2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
