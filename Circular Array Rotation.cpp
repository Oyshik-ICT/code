#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q,i,j,num,m,temp;
    vector<pair <int,int> >v;
    cin>>n>>k>>q;
    int a[q];
    for(i=0;i<n;i++){
            cin>>num;
            temp=i+k;
            if(temp<n){
                v.push_back(make_pair(num,temp));
            }
        else{
            temp=temp%n;
            v.push_back(make_pair(num,temp));
        }
    }
    for(i=0;i<q;i++){
        cin>>m;
        a[i]=m;
    }

    for(i=0;i<q;i++){
            temp=a[i];
        for(j=0;j<n;j++){
            if(v[j].second==temp){
                cout<<v[j].first<<endl;
                break;
            }
        }
    }
    return 0;
}
