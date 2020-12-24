#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    vector< pair<int,int> > v;
    vector< pair<int,int> > :: iterator it;
    int i,n,x,y;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    it=v.begin();
    y=it->first;
    it++;
    if(y==it->first){
        cout<<"Still Rozdil"<<endl;
    }
    else{
            it--;
        cout<<it->second<<endl;
    }
    return 0;
}
