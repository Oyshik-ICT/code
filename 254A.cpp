#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,i,c=-1;
    vector< pair<int,int> > v;
    scanf("%d",&n);
    for(i=1;i<=2*n;i++){
        scanf("%d",&num);
        v.push_back(make_pair(num,i));
    }
    sort(v.begin(),v.end());
    for(i=0;i<2*n;){
        if(v[i].first==v[i+1].first){
            cout<<v[i].second<<" "<<v[i+1].second<<"\n";
            i=i+2;
            c=1;
        }
        else{
            i++;
        }
    }
    if(c==-1){
        cout<<"-1"<<"\n";
    }

    return 0;
}
