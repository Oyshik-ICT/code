#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,result;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    if(2*a[0]<=a[n-1]){
        result=a[n-1];
    }
    else{
        result=2*a[0];
    }
    if(result<b[0]){
        printf("%d\n",result);
        return 0;
    }
    else{
        result=b[0]-1;
    }
    if(2*a[0]<=result && result>=a[n-1]){
        printf("%d\n",result);
    }
    else{
        printf("-1\n");
    }

    return 0;
}
