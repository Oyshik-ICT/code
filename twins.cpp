#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,i,d,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    if(n==1){
        printf("1\n");
        return 0;
    }
    sort(a,a+n);
    d=sum/2;
    sum=0;
    for(i=n-1;i>=0;i--){
        sum=sum+a[i];
        if(sum>d){
            c++;
            break;
        }
        c++;
    }
    printf("%d\n",c);

    return 0;
}
