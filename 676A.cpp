#include<bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n,i,n1,n2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            n1=i;
        }
        else if(a[i]==n){
            n2=i;
        }
    }
    if(a[1]==1 || a[1]==n || a[n]==n || a[n]==1){
        printf("%d\n",n-1);
    }
    else{
       if(n1>n2){
            swap(n1,n2);
       }
       n1=n-n1;
       n2=n2-1;
       printf("%d\n",max(n1,n2));
    }

    return 0;
}
