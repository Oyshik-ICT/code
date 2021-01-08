#include<bits/stdc++.h>

using namespace std;

long long int a[91];

int main()
{
    int n,i,x;
    long long int sum=0,t,k;
    char ch;
    cin>>n>>k;
    while(n--){
        cin>>ch;
        x=ch;
        a[x]++;
    }
    sort(a,a+91);
    for(i=90;i>=0;i--){
        if(k==0 || a[i]==0){
            break;
        }
        if(k>=a[i]){
            k=k-a[i];
            t=a[i]*a[i];
            sum=sum+t;
        }
        else{
            sum=sum+(k*k);
            k=0;
        }
    }
    printf("%lld\n",sum);

    return 0;
}
