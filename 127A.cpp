#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    double x,y,sum=0;
    scanf("%d%d",&n,&k);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++){
        x=(a[i]-a[i+1])*(a[i]-a[i+1]);
        y=(b[i]-b[i+1])*(b[i]-b[i+1]);
        sum=sum+sqrt((x+y));
    }
    printf("%.9lf\n",(sum/50.0)*(double)k);

    return 0;
}
