#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
    vector< pair<int,int> > v;

    int n,i,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    cout<<v[0].second<<endl;

    return 0;
}
