#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int a[5];


int main()
{
    int n,i,num,v1;
    vector< pair<int,int> > v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        if(num==1){
            a[0]=a[0]+1;
        }
        else if(num==2){
            a[1]=a[1]+1;
        }
        else if(num==3){
            a[2]=a[2]+1;
        }
        else if(num==4){
            a[3]=a[3]+1;
        }
        else if(num==5){
            a[4]=a[4]+1;
        }
    }
    for(i=0;i<5;i++){
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    v1=v[4].second;
    for(i=4;i>=1;i--){
        if(v[i].first==v[i-1].first){
            v1=v[i-1].second;
        }
        else{
            break;
        }
    }
    cout<<v1<<endl;

    return 0;
}
