#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        x=-1;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                x=i+1;
            }
        }
        if(n==1){
            if(x!=-1){
                printf("1\n");
                printf("1\n");
            }
            else{
                printf("-1\n");
            }
        }
        else if(x!=-1){
            printf("1\n");
            printf("%d\n",x);
        }
        else{
            printf("2\n");
            printf("1 2\n");
        }
    }
    return 0;
}
