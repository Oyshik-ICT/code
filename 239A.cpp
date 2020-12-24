#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int y,n,k,i=1,mul,c=0;
    cin>>y>>k>>n;
    if(y>=n){
        printf("-1\n");
        return 0;
    }
    while(1){
        mul=i*k;
        if(mul>n){
            break;
        }
        if(mul-y>0){
            printf("%d ",mul-y);
            c=1;
        }
        i++;
    }
    if(c==0){
        printf("-1\n");
    }
    printf("\n");

    return 0;
}
