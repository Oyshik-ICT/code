#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    if(n>2){
        for(i=n;i>=1;i--){
            printf("%d ",i);
        }
    }
    else{
        printf("-1");
    }
    printf("\n");

    return 0;
}
