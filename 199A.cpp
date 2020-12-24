#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"0"<<" "<<"0"<<" "<<"0"<<"\n";
        return 0;
    }
    if(n==1){
        cout<<"0"<<" "<<"1"<<" "<<"0"<<"\n";
        return 0;
    }
    if(n==2){
        cout<<"0"<<" "<<"1"<<" "<<"1"<<"\n";
        return 0;
    }
    if(n==3){
        cout<<"1"<<" "<<"1"<<" "<<"1"<<"\n";
        return 0;
    }
    int f[1000000];
    long long int final1,f1=1,s1=1,i=2,num;
    f[0]=1;
    f[1]=1;
    for(;;){
        final1=f1+s1;
        if(final1>1000000000){
            break;
        }
        f[i]=final1;
        i++;
        f1=s1;
        s1=final1;
    }
    for(i=0;i<1000000000;i++){
        if(f[i]==n){
            num=i;
            break;
        }
    }
    cout<<f[num-1]<<" "<<f[num-3]<<" "<<f[num-4]<<"\n";

    return 0;
}
