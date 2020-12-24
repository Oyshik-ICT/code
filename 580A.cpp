#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=1,ans=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            c++;
        }
        else{
            c=1;
        }
        ans=max(c,ans);
    }
    printf("%d\n",ans);

    return 0;
}
