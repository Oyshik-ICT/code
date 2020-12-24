#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector< pair<int,int> > v;
    int r,s,run,stump,i;
    for(i=0;i<3;i++){
            cin>>r>>s;
        v.push_back(make_pair(r,s));
    }
    if(v[0].first==v[1].first){
        run=v[0].first;
        stump=v[2].second;
    }
    else if(v[0].first==v[2].first){
        run=v[0].first;
        stump=v[1].second;
    }
    else if(v[1].first==v[2].first){
        run=v[1].first;
        stump=v[0].second;
    }
    else if(v[0].second==v[1].second){
        stump=v[0].second;
        run=v[2].first;
    }
    else if(v[0].second==v[2].second){
        stump=v[0].second;
        run=v[1].first;
    }
    else if(v[1].second==v[2].second){
        stump=v[1].second;
        run=v[0].first;
    }
    cout<<run<<" "<<"run"<<" "<<"and"<<" "<<stump<<" "<<"stumping."<<endl;

    return 0;
}
