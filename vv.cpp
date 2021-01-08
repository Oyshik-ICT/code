#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector< pair<int,int> >v;
     vector< pair<int,int> >temp;
    int p,t,k,n,c=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        cin>>p>>t;
        v.push_back(make_pair(p,t));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j+1].first>v[j].first){
                swap(v[j],v[j+1]);
            }
        }
    }
    temp.push_back(v[k-1]);
    for(int i=0;i<n;i++){
        if(temp[0].first==v[i].first && temp[0].second==v[i].second){
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
