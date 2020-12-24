#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector< pair<int,int> >v;
    int p,t,n,k,i,c1=0,c2=0;
    cin>>n>>k;
    for( i=0;i<n;i++){
            cin>>p>>t;
        v.push_back(make_pair(p,t));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<"\n";
       for(i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for( i=0;i<n-1;i++){
            if(v[i].first==v[i+1].first){
                if(v[i].second>v[i+1].second){
                        swap(v[i],v[i+1]);
                }
            }
    }
    cout<<"\n";
    for(i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(i=k-1;i>=1;i--){
        if(v[i].first==v[i-1].first && v[i].second==v[i-1].second){
            c1++;
        }
        else{
            break;
        }
    }
    if(c1>0){
        c1++;
    }
    for(i=k-1;i<n-1;i++){
        if(v[i].first==v[i+1].first && v[i].second==v[i+1].second){
            c2++;
        }
        else{
            break;
        }
    }
    cout<<c1<<" "<<c2<<endl;
    if(c1==0 && c2>0){
        c2++;
    }
    if(c1==0 && c2==0){
        cout<<"1"<<"\n";
    }
    else{
        cout<<c1+c2<<"\n";
    }

    return 0;
}
