#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
    vector< pair<int,int> > v;
    int s,n,x,y,i;
    cin>>s>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(s>v[i].first){
            s=s+v[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
