#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[12],k,i,sum=0,c=0;
    cin>>k;
    for(i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a,a+12);
    if(k==0){
        cout<<"0"<<endl;
        return 0;
    }
    for(i=11;i>=0;i--){
        sum=sum+a[i];
        c++;
        if(sum>=k){
            break;
        }
    }
    if(sum>=k){
        cout<<c<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
