#include<iostream>
#include<math.h>
using namespace std;

int prime(int n)
{
    int i,root;
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    root=sqrt(n);
    for(i=3;i<=root;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,b,mod,rev=0,total=0,i,temp,result;
    cin>>a>>b;
    for(i=a;i<=b;i++){
            if(i==1){
                i=i+1;
            }
        result=prime(i);
        if(result==1){
            temp=i;
            while(temp>0){
                mod=temp%10;
                rev=(10*rev)+mod;
                temp=temp/10;
            }
            result=prime(rev);
            if(result==1){
                total++;
            }
            rev=0;
        }
    }
    cout<<total<<endl;
    return 0;
}
