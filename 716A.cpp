#include<bits/stdc++.h>

int main()
{
    int n,c,t=0,x=0,i;
    scanf("%d%d",&n,&c);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=c){
            t++;
        }
        else{
            t=1;
            x=1;
        }
    }
    if(x==0){
        printf("%d\n",n);
    }
    else{
        printf("%d\n",t);
    }

    return 0;
}
