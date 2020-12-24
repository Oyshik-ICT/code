#include<iostream>
using namespace std;

int main()
{
    int n,len=1,x=0,num=0,i;
    cin>>n;
    int q=2;
    int ara[100000];
    ara[0]=1;
    while(q<=n){
            x=0;
    num=0;
            while(x<len){
        ara[x]=ara[x]*q;
        ara[x]=ara[x]+num;
        num=ara[x]/10;
        ara[x]=ara[x]%10;
        x++;
        }
        while(num!=0){
            ara[len]=num%10;
            num=num/10;
            len++;
        }
        q++;
    }
 cout<<len<<endl;
    return 0;

}
