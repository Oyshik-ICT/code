#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int n,div;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n%2!=0){
            printf("YES\n");
        }
       else if(n%3==0 || n%5==0 || n%7==0 || n%9==0){
                printf("YES\n");
        }
        else{
            while(1){
                div=n/2;
                if(div==1){
                        printf("NO\n");
                    break;
                }
                if(div%2!=0){
                    printf("YES\n");
                    break;
                }
                n=n/2;
            }
        }
    }
    return 0;
}
