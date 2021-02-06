#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n<2020){
            printf("NO\n");
        }
        else if(n%2020==0 || n%2021==0){
            printf("YES\n");
        }
        else{
                while(1){
            n=n-4041;
            if(n%2020==0 || n%2021==0){
                printf("YES\n");
               break;
            }
            if(n<2020){
                printf("NO\n");
                break;
            }
        }
        }
    }
    return 0;
}
