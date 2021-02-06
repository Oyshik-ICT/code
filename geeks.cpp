#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,res=0,temp,index=0,a=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
        res=res^ar[i];
    }
    temp=res;
    while(temp>0){
        if(temp & 1){
            break;
        }
        index++;
        temp=temp>>1;
    }

    int mask=(1<<index);
    vector<int> v;
    for(i=0;i<n;i++){
        if(ar[i] & mask){
            v.push_back(ar[i]);
        }
    }
    for(i=0;i<v.size();i++){
        a=a^v[i];
    };
    int b=res^a;

    cout<<a<<" "<<b<<"\n";

    return 0;
}
