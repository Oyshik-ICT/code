#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,sum=0,j,num;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<a[i];j++){
            scanf("%d",&num);
            sum=sum+num*5;
        }
        b[i]=sum+a[i]*15;
    }
    sort(b,b+n);
    printf("%d\n",b[0]);

    return 0;
}
