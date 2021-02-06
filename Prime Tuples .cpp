#include<bits/stdc++.h>

using namespace std;

int a[1000000];

void prime()
{
    int i,j,root;
     for(i = 2; i <= 1000000; i++) {
        a[i] = 1;
    }
    root=sqrt(1000000);
    for(i=2;i<=root;i++){
        if(a[i]==1){
            for(j=2;i*j<=1000000;j++){
                a[i*j]=0;
            }
        }
    }
}

int main()
{
    int t,n,c,r,i;
    scanf("%d",&t);
    prime();
    while(t--){
        scanf("%d",&n);
        c=0;
        for(i=3;i<=n;i=i+2){
                if(a[i]==0){
                    continue;
                }
            r=2+i;
            if(r>n){
                break;
            }
            if(a[r]==1 && r<=n){
                c++;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
