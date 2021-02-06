#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,num,x=0;
    long long int sum1=0,sum2=0,f,m=10000000000;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        if(num%2==0){
            sum1=sum1+num;
        }
        else{
            sum2=sum2+num;
            x++;
            if(num<m){
                m=num;
            }
        }
    }
    if(x%2==0){
        f=sum1+sum2;
        printf("%lld\n",f);
    }
    else{
        sum2=sum2-m;
        f=sum1+sum2;
        printf("%lld\n",f);
    }

    return 0;
}
