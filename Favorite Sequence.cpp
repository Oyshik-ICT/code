#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(n%2==0){
            for(k=0,j=n-1;k<n/2;k++,j--){
                printf("%d %d ",a[k],a[j]);
            }
        }
        else{
                     for(k=0,j=n-1;k<=n/2;k++,j--){
                            if(k==n/2){
                                printf("%d",a[k]);
                                break;
                            }
                printf("%d %d ",a[k],a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
