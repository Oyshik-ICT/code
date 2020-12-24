#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    long long int x,y,a,b,one, two;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        one=a*(x+y);
        two=b*(min(x,y))+a*(max(x,y)-min(x,y));
        printf("%lld\n",min(one,two));
    }
    return 0;

}
