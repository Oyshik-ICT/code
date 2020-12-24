#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y=9;
    scanf("%d",&n);
    x=n-y;
    if(x%2==0){
        printf("%d %d\n",x,y);
    }
    else{
        printf("%d %d\n",x+1,y-1);
    }

    return 0;
}
