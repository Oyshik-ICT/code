#include<iostream>
using namespace std;

int prime(long long int x)
{
    if(x==2){
        return -1;
    }
    int total=0;
    long long int i;
    for(i=2;i<x;i++){
        if(x%i==0){
            total++;
            if(total==2){
                break;
            }
        }
    }
    if(total==1){
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    int i,result,n;
    cin>>n;
   long long  int s[100000];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){
        result=prime(s[i]);
        if(result==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
