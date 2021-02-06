#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n,n1,n2,sum1,sum2;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    sum1=a1+a2+a3;
    if(sum1==0){
        n1=0;
    }
    sum2=b1+b2+b3;

    if(sum2==0){
        n2=0;
    }

    if(sum1<5 && sum1>0){
        n1=1;
    }
    else{
        if(sum1%5==0){
            n1=sum1/5;
        }
        else{
            n1=(sum1/5)+1;
        }
    }
    if(sum2<10 && sum2>0){
        n2=1;
    }
    else{
        if(sum2%10==0){
            n2=sum2/10;
        }
        else{
            n2=(sum2/10)+1;
        }
    }

    if(n1+n2<=n){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

    return 0;
}
