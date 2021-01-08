#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,w,h,c,n,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&w,&h,&n);
        c=0;
        if(n==1){
            printf("YES\n");
            continue;
        }
        if((w*h)%2!=0){
            printf("NO\n");
            continue;
        }
        x=w*h;
        while(1){
            if(x%2!=0){
                break;
            }
            x=x/2;
            c++;
        }
        if(pow(2,c)>=n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
