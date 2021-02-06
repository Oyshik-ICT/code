#include<bits/stdc++.h>

using namespace std;

int b[2001];

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(i=0;i<n;i++){
        if(b[a[i]]==0){
            b[a[i]]=i+1;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",b[c[i]]);
    }

    printf("\n");

    return 0;
}
