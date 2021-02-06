#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s,i,sum=0;
    scanf("%d%d",&n,&s);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++){
        sum=sum+a[i];
        if(sum>s){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
