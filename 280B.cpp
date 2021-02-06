#include<bits/stdc++.h>

using namespace std;

int city[101];

int main()
{
    int n,l,r,c=0,i,a;
    scanf("%d%d",&n,&a);
    l=a;
    r=a;
    for(i=1;i<=n;i++){
        scanf("%d",&city[i]);
    }
    while(1){
        l--;
        r++;
        if(l<=0 && r>n){
            break;
        }
        else if(l>0 && r<=n){
            if(city[l]==1 && city[r]==1){
                c=c+2;
            }
        }
        else if(l>0){
            if(city[l]==1){
                c++;
            }
        }
        else if(r<=n){
            if(city[r]==1){
                c++;
            }
        }
    }
    if(city[a]==1){
        c++;
    }
    printf("%d\n",c);

    return 0;
}
