#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y,&z);
        if(x+y==z || y+z==x || x+z==y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
