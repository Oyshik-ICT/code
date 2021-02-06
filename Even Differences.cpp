#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,o,e;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        e=0;
        o=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(n==o || n==e){
            printf("0\n");
        }
        else if(o>e){
            printf("%d\n",e);
        }
        else if(e>o){
            printf("%d\n",o);
        }
        else if(o==e){
            printf("%d\n",o);
        }
    }

    return 0;
}
