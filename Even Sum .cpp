#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,n,sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        if(sum%2==0){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
}

return 0;

}
