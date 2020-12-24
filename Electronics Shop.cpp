#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ba,k,u,i,j;
    vector <int> v;
    vector <int> ::  iterator it;
    cin>>ba>>k>>u;
    int a[k],b[u];
    for(i=0;i<k;i++){
        cin>>a[i];
    }
     for(i=0;i<u;i++){
        cin>>b[i];
    }
    for(i=0;i<k;i++){
        if(a[i]>=ba){
            continue;
        }
        for(j=0;j<u;j++){
            if(b[j]>=ba){
                continue;
            }
            v.push_back(a[i]+b[j]);
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++){
        if(*it<=ba){
            cout<<*it<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}
