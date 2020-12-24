#include<iostream>
using namespace std;

int main()
{
    int k,result=0,i=19,sum=0,mod,result1;
    cin>>k;
    while(1){
            result1=i;
        while(result1!=0){
            mod=result1%10;
            sum=sum+mod;
            result1=result1/10;
        }
        if(sum==10){
            result=result+1;
        }
        if(sum==10 && result==k ){
            cout<<i<<endl;
            break;
        }
        sum=0;
    i++;
    }
    return 0;

}
